#include "main.h"

/**
 * _strncpy - Copies a string up to n characters.
 * @dest: Destination string where the content is to be copied.
 * @src: Source string to be copied.
 * @n: Number of characters to copy from source.
 *
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
