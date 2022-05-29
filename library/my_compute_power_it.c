#include <stdio.h>
#include <math.h>
#include "lib.h"

int my_compute_power_it (int nb , int p )
{   
    int i;
    int j = nb;
    if (nb < 0 || p < 0)
    {
        return 0;
    }

    if (nb == 0 || p == 0)
    {
        return 1;
    }
    else 
    {
        for(p = 2 ; p > 1 ; p--)
        {
            nb = nb * j;
        }
        return nb;
    }
}