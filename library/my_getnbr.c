#include "lib.h"
#include <stdio.h>

int my_getnbr ( char const * str ) 
{
    int i = 0, k = 0, j, len;
    len = strlen(str);
    int list = 0;
    while (i < len) 
    {
        if (str[i] >= '0' && str[i] <= '9' )
        {
            if (i >= 1)
            {
                k = 10;
            }
            list = str[i] - 48 + list * k;
            if (str[i + 1] > '9' || str[i + 1] < '0') 
            {
                j = list;
                break;
            }    
        }
        i++;
    }
    return j;
}