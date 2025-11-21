#include <stdio.h>
#include <string.h>
void main()
{
    //create
    char name[15] = "bhoomika d b";
    char new[100] = "good evening";

    //access
    printf("%c\n", name[8]);

    //lenght
    printf("lenght of string is %ld\n", strlen(name));
    
    //concatenation
    strcat(new, name);     // new = good evening+bhoomika
    printf("%s", new);
    //search for a char in string!
    printf("%d", strstr(new, "good evening"));  //0
}