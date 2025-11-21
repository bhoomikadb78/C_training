#include <stdio.h>
void flob(int n)
{
    int a =0;
    int b =1;
    int sum;
    for(int i=0; i <=n; i++)
    {
        printf("%d ", a);
        sum=a+b;
        a=b;
        b=sum;
    }
        printf("%d ", sum);
}
void main()
{
    int n;
    printf("enter n:");
    scanf("%d  ", &n);
    flob(n);
}