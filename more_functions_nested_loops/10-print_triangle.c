#include "main.h"
/**
 * print_triangle - Prints a right-aligned triangle of size `size`
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int high;
	int j;
	int tag;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (high = 1; high <= size; high++)
	{
		for (j = size; j > high; j--)
			_putchar(' ');
		for (tag = 0; tag < high; tag++)
			_putchar('#');
		_putchar('\n');
	}
}

