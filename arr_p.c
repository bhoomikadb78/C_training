#include <stdio.h>
void main()
{
    int arr[5] = {78,98,97,60};
    int *p = arr;
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    printf("%d\n", *(p+2));
    printf("%d\n", *(p+3));
}