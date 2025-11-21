//write a cfunction which well accept three parameters l,b,h and returns vloume of the cube!
#include <stdio.h>
int fun(int l, int b, int h)
{
    int vol = l*b*h;
    return vol; 
}
void main()
{
    int l = 2, b = 7, h = 8;
    printf("%d\n", fun(l,b,h)); 
}
