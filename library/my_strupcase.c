#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char * my_strupcase(char *str)
{

    for (int i = 0; str[i] != '\0'; i++) 
    {   
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i]= str[i] - 32;

    }
    return str;
}