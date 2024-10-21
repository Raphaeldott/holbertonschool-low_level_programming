#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry of the number
 * Return: 0 (success)
 */
int main(void)
{
	int n = rand() - RAND_MAX / 2; /* Assign the number to n */

	srand(time(NULL)); /* Initialize random number generator */
	printf("%d\n", n);
	if (n > 0)
		printf("is positive\n");
	if (n < 0)
		printf("is negative\n");
	if (n == 0)
		printf("is zero\n");
	return (0);
}
/* tell if the number is positive or negative */
