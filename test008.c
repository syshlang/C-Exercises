#include <stdio.h>

void main()
{
   int x,y;
  if (x> -5 && x<0) {
    y = x; 
  } else if (x=0){
    y = x-1;
  } else {
    y = x+1; 
  }
  printf("%d\n",y);
}
