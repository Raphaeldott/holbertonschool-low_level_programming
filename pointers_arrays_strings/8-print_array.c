#include <stdio.h>
#include "main.h"
/**
 *print_array - print the array number n
 *@a: array
 *@n: number of array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
