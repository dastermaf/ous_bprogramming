#ifndef PARSER_H
#define PARSER_H

#ifdef __cplusplus
extern "C" {
#endif

int chopy(char *destination, const char *source);
int char_to_int(unsigned int *destination, const char *source);
int double_char_to_int(double *destination, const char *source);

#ifdef __cplusplus
}
#endif

#endif