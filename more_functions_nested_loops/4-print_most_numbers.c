#include "main.h"
/**
 *print_most_numbers - exclude 2 and 4
 *
 *
 */
void print_most_numbers(void)
{
	int c = 0;

	for (; c <= 9; c++)
	{
		if (c != 2 && c != 4)
			_putchar((c % 10) + '0');
	}
	_putchar('\n');
}
