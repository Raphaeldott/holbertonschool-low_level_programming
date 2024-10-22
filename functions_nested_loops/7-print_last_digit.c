#include "main.h"
/**
 *print_last_digit - will print the last number of n
 *_putchar: print
 *@n: is the integral number
 *
 * Return: last_digit (success)
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
