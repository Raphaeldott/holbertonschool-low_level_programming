#include "main.h"

/**
 * check_prime - helper function to check if number is prime
 * @n: the number to check
 * @i: current divisor being tested
 *
 * Return: 1 if n is prime, 0 if not
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}