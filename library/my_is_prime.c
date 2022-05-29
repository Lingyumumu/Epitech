#include <stdio.h>
#include <math.h>
#include "lib.h"

int my_is_prime (int nb ) 
{
    int i;
    int a = 0;

    for ( i = 2 ; i < nb ; i++)
    {
        if (nb % i == 0)
        {
            return 0;
        }
    }  
    return 1; 
}