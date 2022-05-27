#include "lib.h"
#include <stdio.h>

void my_sort_int_array (int * array , int size ) 
{   
    int i, j;
    int max;
    
   for (i = 0 ; i < size ; i++) 
   {
       for (j = 0 ; j < size; j++)
       {
           if (array[i] < array[j])
           {
               max = array [i];
               array[i] = array[j];
               array[j] = max;
           }
       }
   }
    for (i = 0; i < size ; i++) 
    {
        printf("%d ", array[i]);
    }
}