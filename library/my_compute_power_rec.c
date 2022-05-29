#include <stdio.h>
#include <math.h>
#include "lib.h"

int my_compute_power_rec (int nb, int p ) 
{
    if (nb < 0)
    {
        return 0;
    }

    if (nb == 0)
    {
        return 1;
    }
    if (p + 1 > 1)
    {
        return( my_compute_power_rec ( nb , p - 1 ) *nb);
    }
}
