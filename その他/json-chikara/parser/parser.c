#include <stdio.h>
#include <stdlib.h>
#include "parser.h"

int chopy(char *destination, const char *source) {
    if (source == NULL) {
        fprintf(stderr, "[omoi.c] [copy] Failed to copy, source is NULL");
        return 1;
    }

    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';

    return 0;
}

int char_to_int(unsigned int *destination, const char *source) {
    if (source == NULL) {
        fprintf(stderr, "[omoi.c] [omoi] Failed to parce, source is NULL");
        return 1;
    }

    unsigned int result = 0;

    while (*source >= '0' && *source <= '9') {
        const unsigned int current = *source - '0';
        result = (result * 10) + current;
        source++;
    }

    *destination = result;
    return 0;
}

int double_char_to_int(double *destination, const char *source) {
    if (source == NULL) {
        fprintf(stderr, "[omoi.c] [double_omoi] Failed to parce, source is NULL");
        return 1;
    }

    char *endptr;
    *destination = strtod(source, &endptr);

    if (source == endptr) return 1;

    return 0;
}