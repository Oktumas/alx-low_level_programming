#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
  if (n == 0) {
    printf("The numbe is zero %d\n", n); 
  }
  else if(n > 0) {
    printf("The number is positive %d\n", n); 
  }
  else if(n < 0) {
    printf("The number is negative %d", n); 
  }
  else {
    printf("Please provide a number"); 
  }
}

}
