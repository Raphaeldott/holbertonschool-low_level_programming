#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value (inclusive)
 * @max: maximum value (inclusive)
 *
 * Return: pointer to the newly created array, or NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	/* If min > max, return NULL */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array */
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	/* Fill the array with values from min to max */
	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
