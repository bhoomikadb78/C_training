//structure for name of the book, author,
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
    char name[50];
    char author[80];
    int year;
};
 void main()
 {
    int n;
    printf("enter number of book");
    scanf("%d", &n);
    struct book b[2];
    for(int i=0; i<n; i++)
{
    printf("enter the name of book:");
    scanf("%s", b[i].name);

    printf("enter the author of book:");
    scanf("%s", b[i].author);

    printf("enter the publication of book:");
    scanf("%d", &b[i].year);
}
 }