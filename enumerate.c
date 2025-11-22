#include <stdio.h>
enum days
{
    monday, tuesday, wednesday, thursday
};

void main()
{
  enum days day;
  day = wednesday;
  printf("%d ", day);
}