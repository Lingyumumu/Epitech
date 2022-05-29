#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen ( char const * str ) 
{
    int i;
    for( i = 0 ; str[i] != '\0'; i++);
    return i;
}