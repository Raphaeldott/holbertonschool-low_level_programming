#include <stdio.h>
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: 1D array representing the square matrix
 * @size: the size of the matrix (number of rows/columns)
 */
void print_diagsums(int *a, int size)
{
	int diag1 = 0;
	int diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diag1 = diag1 + a[i * size + i];
		diag2 = diag2 + a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", diag1, diag2);
}
