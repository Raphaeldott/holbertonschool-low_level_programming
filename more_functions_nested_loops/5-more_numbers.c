#include "main.h"
/**
 *more_numbers - loop of numbers
 *
 *
 */
void more_numbers(void)
{
	int i = 0;
	int a;

	for (; i <= 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
