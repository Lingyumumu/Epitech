#include <stdio.h>
#include <math.h>
#include "lib.h"

int my_compute_factorial_rec (int nb ) 
{
    if (nb < 0)
    {
        return 0;
    }

    if (nb == 0)
    {
        return 1;
    }
    else
    {
        return(my_compute_factorial_rec (nb - 1) * nb);
    }
}