#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strcapitalize(char *str)
{
    char *b;
    int n;
    n = my_strlen(str);
    printf("%d\n", n);
    b = malloc(sizeof(char) * n );
    for (int i = 0 ; str[i] != '\0'; i++)
    {
        b[i] = str[i];
    }
    for (int i = 0 ; str[i] != '\0' ; i++)
    {
        if (str[i] == ' ')
        {
            b[i + 1] = str[i + 1] - 32;
        }
    }
    b[0] = b[0] - 32;
    return b;
}