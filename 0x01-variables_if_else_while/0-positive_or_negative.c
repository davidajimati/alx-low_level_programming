#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
/*
* main - the entry part of the program
* return: Should return 0 if thsi program is successful
*/
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes there */
	if (n > 0)
	{
	    printf("%d is positive\n", n);
	}
	
	else if (n == 0)
	{
	    printf("%d is zero\n", n);
	}
	else
	{
	    printf("%d is negative\n", n);
	}
return (0);
}