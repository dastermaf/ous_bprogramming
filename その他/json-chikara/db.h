#ifndef DATABASE_H
#define DATABASE_H

typedef struct player {
    unsigned int id;
    char nickname[50];
    double balance;
    unsigned int level;
    char create_at[32];
} Player;

int db_connect();
int db_disconnect();
int get_player(unsigned int r_id, Player *out);
int chopy(char *destination, const char *source);
int omoi(unsigned int *destination, const char *source);
int double_omoi(double *destination, const char *source);


#endif