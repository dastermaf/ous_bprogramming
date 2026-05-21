#ifndef DB_H
#define DB_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct player {
    unsigned int id;
    char nickname[50];
    double balance;
    unsigned int level;
    char create_at[32];
} Player;

typedef struct hero {
    unsigned int id;
    char name[50];
    char h_class[20];
    double damage;
    char special[50];
    char description[256];
} Hero;

int db_connect();
int db_disconnect();
int find(int table_type, const char *type, const char *value, void *out);

int get_hero_by_id(unsigned int r_id, Hero *out);
int get_hero_by_name(unsigned int r_id, Hero *out);

int post_account(Player *data);

#ifdef __cplusplus
}
#endif

#endif