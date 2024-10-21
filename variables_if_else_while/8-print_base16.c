#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - prints hex base
 * putchar: prints 1 character
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
