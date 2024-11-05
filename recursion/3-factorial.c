#include "main.h"
/**
 *factorial - calculate factorials
 *@n: the factorial to calculate
 *Return: -1 if n < 0
 *        1 if n == 0
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
