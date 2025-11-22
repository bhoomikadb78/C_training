//write a cprogram which add by a three numbers call by referencr!
#include <stdio.h>
void sum_ref (int *a, int*b, int *c)
{
    int sum = *a+*b+*c;
    printf("%d ", sum);
}
void main()
{
    int a =90;
    int b =80;
    int c =78;
    printf("call by reference:\n"); //call by reference
    sum_ref(&a,&b,&c);
}