#include <stdio.h>
#include <stdlib.h>
void main()
{
    float *p = (float *)calloc(5,sizeof(float));
    p[0] = 7.8;
    p[1] = 5.6;
    p[2] = 8.9;
    p[3] = 9.0;
    p[4] = 4.5;
    printf("%f %f %f %f %f ", p[0],p[1],p[2],p[3],p[4]);

}