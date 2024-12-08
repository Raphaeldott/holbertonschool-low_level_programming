#include "main.h"

/**
 * flip_bits - returns the number of bits needed to
 * flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int count;

	diff = n ^ m;  /* XOR the numbers to find the differing bits */
	count = 0;

	/* Count the number of 1 bits in diff */
	while (diff)
	{
		count += diff & 1;  /* If the last bit is 1, increment count */
		diff >>= 1;  /* Shift the bits to the right */
	}

	return (count);
}
