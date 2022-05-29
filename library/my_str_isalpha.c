#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int my_str_isalpha (char const *str)
{
    int a = 1;
    for (int i = 0 ; str[i] != '\0' ; i++)
    {
        if (str[i] < 'a' || str[i] > 'z'
        || str[i] < 'A' || str[i] > 'Z')
        {
            a = 0;
        }
    }
    return a;
}