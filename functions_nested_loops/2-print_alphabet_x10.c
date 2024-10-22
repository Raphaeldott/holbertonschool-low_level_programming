#include "main.h"
/**
 * print_alphabet_x10 - should print 10 times
 * _putchar: to add a new line
 * alpha[]: takes a string
 */
void print_alphabet_x10(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(alpha[j]);
		}
		_putchar('\n');
	}
}
