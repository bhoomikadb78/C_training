//write a c function which well accept and array arr, its size as n, and returns the different between first and last element
#include <stdio.h>
#include <stdlib.h>
int sub_arr(int arr[], int n)
{
    int sub = arr[0] - arr[n-1];
    return abs(sub);
}
void main()
{
    int arr[5] = {7,8,9,5,6};
    int n = 5;
    printf("%d", sub_arr(arr,n));
}