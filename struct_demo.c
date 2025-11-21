#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[50];
    int age;
    float marks;
};

void main()

{
    struct student s1;
    s1.age = 17;
    s1.marks = 91.9;
    strcpy(s1.name, "aishu");

    struct student s2;
    s2.age = 18;
    s2.marks = 90.6;
    strcpy(s2.name, "pallavi");

    struct student s3 = {"tejas" ,19,89.6};

    printf("%s ", s1.name);
    printf("%d ", s1.age);
    printf("%f ", s1.marks);
}
