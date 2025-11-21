//write a function with will accept two input parameter x,y and returns x^2+y^2!
#include <stdio.h>
int top(int x,int y)
{
  int abb = ((x*x) + (y*y));
  return abb;
}
void main()
{
    int x = 4;
    int y = 7;
    printf("%d\n", top(x,y));
}