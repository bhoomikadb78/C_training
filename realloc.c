#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p = (int *)malloc(4*sizeof(int));
    p[0] = 7;
    p[1] = 5;
    p[2] = 8;
    p[3] = 9;
    // increase size to 5 integer
    int *p = (int *)realloc(p, 6* sizeof(int));
    p[4] = 4;
    p[5] = 7;
    printf("%d ", p[4]);

}
