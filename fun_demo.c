#include <stdio.h>
int myadd (int a, int b)
{
    int sum = a+b;
    return sum;
}
void main()
{
    int a = 89;
    int b = 67;
    printf("%d\n", myadd(a,b));

    int c = 59;
    int d = 89;
    printf("%d\n", myadd(c,d));
}