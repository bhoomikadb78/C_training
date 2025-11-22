#include <stdio.h>
enum months
{
   jan=1,
   feb,march,april,may,june,july,aguest,sep,oct,nov,dec
};

void main()
{
  enum months m;
  m = jan;
  char *season;
  switch(m)
  {
    case dec: case jan: case feb:
    season = "winter";
     break;
    case march: case april: case may:
    season = "summer"; 
    break;
    case june: case july: case aguest: 
    season = "moonson"; 
    break;
    case sep: case oct: case nov:
    season = "spring";
    break;
  }
  printf("%s ", season);
}
