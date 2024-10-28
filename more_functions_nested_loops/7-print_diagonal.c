#include "main.h"
/**
 *print_diagonal - diagonal lines
 *@n: number of \
 *
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
}
