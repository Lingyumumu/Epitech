#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

char *my_strcpy(char *dest , char const *src)
{
   int i;
   int n = 10;
    for ( i = 0 ; i < n ; i++)
    {
        dest[i] = src[i];
        if (i == n - 1)
        {
            dest[i + 1] = '\0';
        }
    }
    return dest;