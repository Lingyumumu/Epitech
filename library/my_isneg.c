#include "lib.h"
#include <stdio.h>

int my_isneg (int n)
{
    if (n >= 0)
        putchar('P');
    else
        putchar('N');
    
    return 0;
}