#include <stdio.h>
enum seasons
{
    winnter, summer, moonson, spring
};

void main()
{
  enum seasons season;
  season = moonson;
  printf("%d ",season);
}