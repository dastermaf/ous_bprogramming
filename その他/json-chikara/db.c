#include "db.h"
#include <stdio.h>
#include <mysql.h>

#include <stdlib.h>
#include <string.h>

#define CNF_PATH "/home/dastermaf/Documents/教育/大学/岡山理科大学/Programming/その他/json-chikara/my.cnf"

static MYSQL *connection = NULL;
char db_player_table[25] = "players";
char db_hero_table[25] = "heroes";

int db_connect() {
    connection = mysql_init(NULL);
    if (!connection) {
        fprintf(stderr, "Initialization failed\n");
        return 1;
    }

    mysql_options(connection, MYSQL_READ_DEFAULT_FILE, CNF_PATH);
    mysql_options(connection, MYSQL_READ_DEFAULT_GROUP, "base");

    if (!mysql_real_connect(connection, NULL, NULL, NULL, "json-chikara", 0, NULL, 0)) {
        fprintf(stderr, "[db.c] [db_connect] Filed to connect database: %s\n", mysql_error(connection));
        return 1;
    }
    printf("[db.c] [db_connect] Connected to database\n");
    return 0;
}

int db_disconnect() {
    if (connection) {
        mysql_close(connection);
        connection = NULL;
        return 0;
    }
    fprintf(stderr, "[db.c] [db_disconnect] Filed to disconnect from database: %s\n", mysql_error(connection));
    return 1;
}

MYSQL_RES* send_collecting_query(const char *query) {
    if (mysql_query(connection, query)) {
        fprintf(stderr, "MySQL Error: %s\n", mysql_error(connection));
        return NULL;
    }

    MYSQL_RES *result = mysql_store_result(connection);
    if (result == NULL) {
        return NULL;
    }

    return result;
}

static int assign_data(int table_type, MYSQL_ROW row, void *out) {
    if (row == NULL || out == NULL) {
        return 1;
    }

    if (table_type == 1) {
        Player *p = (Player *)out;
        omoi(&p->id, row[0]);
        chopy(p->nickname, row[1]);
        double_omoi(&p->balance, row[2]);
        omoi(&p->level, row[3]);
        chopy(p->create_at, row[4]);
    } else if (table_type == 2) {
        Hero *h = (Hero *)out;
        omoi(&h->id, row[0]);
        chopy(h->name, row[1]);
        chopy(h->class, row[2]);
        double_omoi(&h->damage, row[3]);
        chopy(h->special, row[4]);
        chopy(h->description, row[5]);
    } else {
        fprintf(stderr, "Strange type of table\n");
        return 1;
    }

    return 0;
}

int find(int table_type, const char *type, const char *value, void *out) {
    char sql[512];
    const char *table_name = (table_type == 1) ? db_player_table : db_hero_table;

    snprintf(sql, sizeof(sql), "SELECT * FROM %s WHERE %s = '%s'", table_name, type, value);

    MYSQL_RES *result = send_collecting_query(sql);
    if (!result) return 1;

    MYSQL_ROW row = mysql_fetch_row(result);

    int status = assign_data(table_type, row, out);

    mysql_free_result(result);
    return status;
}