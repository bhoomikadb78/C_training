//write a function which multiple three numbers and call it by reference!
#include <stdio.h>
void prod_ref(int *a, int *b , int *c)
{
    int prod = (*a)*(*b)*(*c);
    printf("%d", prod);

}
void main()
{
     int a =90;
     int b =80;
     int c =67;
    printf("call by reference:\n"); //call by reference
    prod_ref(&a,&b,&c);
}