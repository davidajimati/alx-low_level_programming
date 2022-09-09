#include <stdlib.h>

#include <time.h>

/* This program will assign a random number to the variable n each time it is executed. */

/* main - entry point of the progaram 
 *
 * Return: should be 0 if this program is successful
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code enters here */

	if (n > 0)
	{
		printf("%d is positive\n", n);
		else
		{
			if (n == 0)
			{
				printf("%d is zero\n", n);
				else
					printf("%d is negative\n", n);
			}
		}
	}
	return (0);
}
