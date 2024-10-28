#include <stdio.h>
/**
 * main - 3digit comb
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a, b, c, d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;

	while (a <= 9)
	{
		while (b < 9)
		{
			while (c <= 9)
			{
				d = c + 1;
				while (d <= 9)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (a != 9 && b != 8)
						putchar(',');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
