#include "lib.h"
#include <stdio.h>

int my_put_nbr(int nb) 
{

    if (nb < 0)
    {
        putchar('-');
        nb = -nb;
    }


    if(nb > 9){
        my_put_nbr(nb/10);
        my_put_nbr(nb%10);
    }
    else{
        putchar(nb +48);
    }
    
    return 0;
}