#include "lib.h"
#include <stdio.h>

int my_print_comb(void)
{
    char a; 
    char b = '1';
    char c = '0';

    for (a = '2'; a <= '9'; a++){
        putchar(c);
        putchar(b);
        putchar(a);
        putchar(' ');
        while(a == '9' && b < '8'){
            a = b + 1;
            b = b + 1;
        }
        while(a == '9' && b == '8' && c < '7'){
            a = c + 1;
            b = c + 1;
            c = c + 1;    
        }   
        }
    return 0;
}