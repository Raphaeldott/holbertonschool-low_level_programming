#include <stdio.h>
#include <unistd.h>

/**
 * main - print numbers
 * Return: 0 (succes)
 */
int main(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}
