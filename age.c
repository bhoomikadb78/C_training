#include <stdio.h>
void main()
{
    int age;
    float height;
    printf("enter the age");
    scanf("%d", &age);
    printf("enter the height");
    scanf("%f", &height);
if(age>16 && height>4.7) //16>15 ? t and 6>4.7? t ==> t 
{
    printf("the person is eligible");
}
else
{
    printf("grow up and come back!");
}
}