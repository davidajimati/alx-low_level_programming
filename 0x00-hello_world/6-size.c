#include <stdio.h>
/**
 * main - Starting point / entry
 *
 * Return:0 when succesful
 */
int main(void)
{
	/* Here I declare my variables */
	char char_type;
	int int_type;
	long int long_int_type;
	long long int long_long_int_type;
	float float_type;

	/* Here's where we declare the work. */
	printf("size of a char: %d byte(s)\n", sizeof (char_type));
	printf("Size of an int: %d byte(s)\n", sizeof (int_type));
	printf("Size of a long int: %d byte(s)\n", sizeof (long_int_type));
	printf("Size of a long long int: %d byte(s)\n", sizeof (long_long_int_type));
	printf("Size of a float: %d byte(s)\n", sizeof (float_type));

	return (0);
}
