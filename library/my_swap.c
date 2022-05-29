#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_swap (int * a , int * b ){
    int c = *a;
    *a = *b ;
    *b = c ;
}