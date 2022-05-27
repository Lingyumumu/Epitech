#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * my_evil_str ( char * str) 
{
    int len = strlen(str);
    char *new_str = malloc(sizeof(char) * len);

    new_str[len] = '\0';
    for (int i = len - 1 , j = 0 ; i >= 0; --i, j++) {
        new_str[j] = str[i];
    }
    return new_str;
}
