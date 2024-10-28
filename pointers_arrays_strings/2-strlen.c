#include "main.h"
/**
 *_strlen - lenght of the string
 *Return: i (lenght)
 *@s: the string
 *
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
