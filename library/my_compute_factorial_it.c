#include <stdio.h>
#include <math.h>
#include "lib.h"

int my_compute_factorial_it( int nb ) 
{
    int i;
    if (nb < 0)
    {
        return 0;
    }
    if (nb == 0)
    {
        return 1;
    }

    if (nb != 0);
    {
        for (i = nb - 1 ; i > 0  ; i--)
        {
            nb = nb * i;
        }
        return nb;
    }
}