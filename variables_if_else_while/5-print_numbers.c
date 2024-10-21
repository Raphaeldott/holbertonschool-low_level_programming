#include <stdio.h>
#include <unistd.h>
/**
 * main - print number 0 to 9
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
	putchar('\n');
	return (0);
}
