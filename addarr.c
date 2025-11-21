#include <stdio.h>
int addarr(int arr[], int size)
{
    int result = 0;
    for(int i = 0; i<size; i++)
    {
        result = result + arr[i];
    }
    return result;
}
void main()

{
int arr[4] = {67,89,78,28};
int size = 4;
printf("%d", addarr(arr,size));
}
