#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - generate a number
 *Return: 0 if success
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d ", n);
	if (last_digit > 5)
		printf("%d and is greater than 5\n", last_digit);
	else if (last_digit == 0)
		printf("%d and is 0\n", last_digit);
	else
		printf("%d and is less 6 and 0\n", last_digit);
	return (0);
}
