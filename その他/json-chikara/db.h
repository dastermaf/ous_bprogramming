#ifndef DATABASE_H
#define DATABASE_H

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
    char class[20];
    double damage;
    char special[50];
    char description[256];
} Hero;

int db_connect();
int db_disconnect();
int get_player_by_id(unsigned int r_id, Player *out);
int chopy(char *destination, const char *source);
int omoi(unsigned int *destination, const char *source);
int double_omoi(double *destination, const char *source);
int get_hero_by_id(unsigned int r_id, Hero *out);
int get_hero_by_name(unsigned int r_id, Hero *out);


#endif