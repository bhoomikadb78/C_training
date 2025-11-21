//create a structure with 3 variables with car maximum speed of price store in array of structure and display
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car
{
    char name[50];
    float speed;
    int price;
};

void main()
{
    int n;
    printf("enter the number of car:");
    scanf("%d", &n);
    struct car b[n];
    for(int i=0; i<n; i++)
{
    printf("enter the name of car:");
    scanf("%s", b[i].name);

    printf("enter the speed of car:");
    scanf("%f", b[i].speed);

    printf("enter the price of car:");
    scanf("%f", &b[i].price);
}
    for(int i=0; i<n; i++)
    {
        printf("%s\n", b[i].name);
        printf("%s\n", b[i].speed);
        printf("%d\n", b[i].price);
    }
    
}   
