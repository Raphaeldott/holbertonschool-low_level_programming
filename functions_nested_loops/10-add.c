#include "main.h"
/**
 *add - make an addition
 *Return: 0 (success)
 *@a: first number
 *@b: second number
 */
int add(int a, int b)
{
	int result = a + b;

	if (result < 10)
		_putchar(result + '0');
	else
	{
		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
	}
	_putchar('\n');
	return (0);
}
