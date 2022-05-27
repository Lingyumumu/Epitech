#include "lib.h"
#include <stdio.h>

int my_print_digits ( void ) 
{
    int a;
    for (a = '0'; a <= '9'; a++){
        putchar(a);
    }
    return 0;
}