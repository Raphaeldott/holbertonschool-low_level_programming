#include "main.h"
/**
 * _memcpy - fills n first bytes from source to dest
 * @dest: pointer to destination
 * @src: pointer to src
 * @n: number of copied bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
