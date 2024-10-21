#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - prints alphabeth in lowercase
 * putchar: prints 1 character
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
