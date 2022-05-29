#include <stdio.h>
#include <math.h>
#include "lib.h"

int my_find_prime_sup (int nb ) 
{
    int i;
    for ( i = 2 ; i < nb ; i++)
    {
        if (nb % i == 0)
        {
            nb++;
            i = 2;
        }
        if(i == nb - 1 && nb % i != 0 )
        {
            return nb;
        }
    }  
}
