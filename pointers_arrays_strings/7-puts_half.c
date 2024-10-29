#include "main.h"
/**
 * puts_half - print half of a string
 *@str: string
 *
 */
void puts_half(char *str)
{
	int start;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	start = length / 2;
	if (length % 2 != 0)
	{
		start = (length + 1) / 2;
	}
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
