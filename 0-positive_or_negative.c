/*Positive or negative*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int n;
  strand(time(0))
  n = rand() - RAND_MAX /2;
  if (n>0)
    printf("%i is positive\n", n);
  else if(n<0)
    printf("%i is negative\n", n);
  else
    printf("%i is 0\n", n);
  return(0)
}
