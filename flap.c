#include <stdio.h>
int search (int arr[], int key, int n)
{
    for(int i =0; i<n; i++)
    {
    if (arr[i]==key)
    return 1;
    }
    return 0;
}
void main()
{
    int arr[5] = {89,78,98,56,67};
    int key;
    int n = 5;
    printf("what are you searching?");
    scanf("%d", &key);
    printf("%d", search(arr,key,n));

}