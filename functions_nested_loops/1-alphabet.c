#include "main.h"
/**
 * print_alphabet - will print a to z
 * c is the variable
 * Description: This function uses _putchar to print each letter
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
