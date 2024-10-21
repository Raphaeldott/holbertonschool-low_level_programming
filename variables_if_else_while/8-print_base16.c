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
	int i;
	char hex[] = "0123456789abcdef";

	i = 0;
	while (i <= 16)
	{
		putchar(hex[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
