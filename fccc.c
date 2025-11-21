//write a c funcion which well accept the one input parameter are and returns the parameter of circle,decalare pi are constant
#include <stdio.h>
float fag(int r)
{
    const float pi = 3.14;
    float cir = 2*pi*r;
    return cir;
} 
void main()
{
    int r = 8;
    printf("cir is %f", fag(r));
}
