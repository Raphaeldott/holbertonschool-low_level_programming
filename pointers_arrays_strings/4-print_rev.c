#include "main.h"
/**
 *print_rev - reverse string display
 *@s: the string
 *
 */
void print_rev(char *s)
{
	int first = 0;
	int last = 0;

	while (s[last] != '\0')
		last++;

	while (last >= first)
	{
		_putchar(s[last]);
		last--;
	}
	_putchar('\n');
}
