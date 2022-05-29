#include <stdio.h>
#include <math.h>
#include "lib.h"

int my_compute_square_root (int nb ) 
{
    double n = nb;
    int a = sqrt(nb);
    double b = sqrt(n);
    printf("%d\n",a);
    printf("%lf\n", b);
    if (a == b){
        return 1;
    }
    else
    {
        return 0;
    }
}