#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positve, zero, or negative
 * Returns: 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	if (l == 0)
		printf("Last digit of the %d is %d and is 0\n", n, l);
	if (l < 6 && l != 0)
		printf("Last digit of %d is less than 6 and not 0\n", n, l);
	return (0);
}

