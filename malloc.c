#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p = (int *)malloc(5*sizeof(int));
    p[0] = 78;
    p[1] = 56;
    p[2] = 89;
    p[3] = 90;
    p[4] = 45;
    printf("%d  %d %d %d %d ", p[0],p[1],p[2],p[3],p[4]);

}