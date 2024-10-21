#include <unistd.h>
#include <stdio.h>
/**
 * main - print combination of 1 digit
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
