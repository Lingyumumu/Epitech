#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int my_strncmp(char const *s1, char const *s2, int n)
{
    int i;
    int s3 = 0;
    for (i = 0 ; i < n ; i++ )
    {
        if(s1[i] - s2[i] > 0)
        {
            s3++;
        }
        if(s1[i] - s2[i] < 0)
        {
            s3--;
        }
        if(s1[i] - s2[i] == 0)
        {
            s3 = s3;
        }
    }
    printf("%d\n",s3);

    return s3;
}