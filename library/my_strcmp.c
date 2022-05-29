#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i;
    int s3 = 0;
    for (i = 0 ; s1[i] != '\0' ; i++ )
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
    if (s3 < 0)
    {
        printf("s2 is more great");
    }
    
    if (s3 == 0)
    {
        printf("s1 = s2");
    }    
    
    if (s3 > 0)
    {
        printf("s1 is more great");
    }
    return s3;
}
