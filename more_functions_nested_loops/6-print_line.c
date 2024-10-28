#include "main.h"
/**
 *print_line - print n times '_'
 *@n: number of _
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
