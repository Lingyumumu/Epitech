#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strlowcase(char * str)
{
    printf("%s", str);
    int i, n1;
    char *b;
    n1 = my_strlen(str);
    b = malloc(sizeof(char) * n1);

    for (i = 0; str[i] != '\0' ; i++)
    {
        b[i] = str[i] + 32 ;
    }

    return b;
}