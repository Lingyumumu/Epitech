#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

int my_strcmp(char *s1, char *s2)
{
    int i;
    int s3 = 0;
    for (i = 0 ; s1[i] != '\0' ; i++ )
    {
        if(s1[i] - s2[i] > 0)
        {s3++;}

        if(s1[i] - s2[i] < 0)
        {s3--;}

        if(s1[i] - s2[i] == 0)
        {s3 = s3;} 
    }
    if (s3 > 0)
        {return 1;}

        if (s3 < 0)
        {return -1;}

        else
        {return 0;}
}
