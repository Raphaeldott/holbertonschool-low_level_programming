#include "main.h"
/**
 *times_table - print the time table
 *_putchar: print
 *
 */
void times_table(void)
{
	int line, col, result;

	for (line = 0; line <= 9; line++)
	{
		for (col = 0; col <= 9; col++)
		{
			result = line * col;
			if (col == 0)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
					_putchar(result + '0');
				}
				else
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
