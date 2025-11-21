#include <stdio.h>
void dis(int n)
{
    if (n>6)  //base cond.
    return;
    printf("%d  ", n);
    dis(n+1);  //recursive call
}
void main()
{
    dis(4);
}