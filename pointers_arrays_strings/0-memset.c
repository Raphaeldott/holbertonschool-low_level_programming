#include "main.h"
/**
 *_memset - fills the first n bytes pointed par s et contiennent b
 *@s: string
 *@b: le byte que l'on veut fill
 *@n: c'est le nombre de fois qu on veut ecrire bytes
 *Return: s (string)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
