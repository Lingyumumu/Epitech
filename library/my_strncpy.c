#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strncpy(char *dest , char const *src, int n)
{
    int i;
    for ( i = 0 ; i < n ; i++)
    {
        dest[i] = src[i];
        if (i == n - 1)
        {
            dest[i + 1] = '\0';
        }
    }
    return dest;
}