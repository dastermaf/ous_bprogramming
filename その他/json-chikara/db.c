#include "db.h"
#include <stdio.h>
#include <mysql.h>

#include <stdlib.h>
#include <string.h>

#define CNF_PATH "/home/dastermaf/Documents/教育/大学/岡山理科大学/Programming/その他/json-chikara/my.cnf"

static MYSQL *connection = NULL;
const char db_table[25] = "players";

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

int get_player(int r_id, Player *out) {
    char query[256];
    snprintf(query, 256, "SELECT * FROM %s WHERE id = %d", db_table, r_id);

    if (mysql_query(connection, query)) {
        fprintf(stderr, "[db.c] [get_player] MySQL Error %u: %s\n",
                mysql_errno(connection), mysql_error(connection));
        return 1;
    }

    MYSQL_RES *result = mysql_store_result(connection);
    if (result == NULL) {
        fprintf(stderr, "[db.c] [get_player] Failed to store result: %s\n",
                mysql_error(connection));
        return 1;
    }

    MYSQL_ROW row = mysql_fetch_row(result);
    if (row == NULL) {
        fprintf(stderr, "[db.c] [get_player] No data for identifier: %d\n", r_id);
        mysql_free_result(result);
        return 1;
    }

    omoi(&out->id, row[0]);
    chopy(out->nickname, row[1]);
    double_omoi(&out->balance, row[2]);
    omoi(&out->level, row[3]);
    chopy(out->create_at, row[4]);

    mysql_free_result(result);
    return 0;
}