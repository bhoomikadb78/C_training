#include <stdio.h>
void name(char first[], char last[],int sw)
{
    int i = 0;
    char full[50];
    while (first[i]!= '\0')  //adding first
    {
        full[i] = first[i];
        i++;

    }
    full[i] = ' '; //adding space
    i++;
    int j = 0;
    while (last[j]!= '\0') //adding last
    {
        full[i] = last[j];
        i++;
        j++;

    }
    printf("%s  ", full);
    int len = i+1;
    if(len<sw)
    printf("fits in the screen");
    else
    printf("does not fit in the screen!");
}
void main()
{

  char first[50] = "bhavya d b\0";
  char last[50] = "bhuvi\0";
  int sw = 35;
  name(first,last,sw);
}