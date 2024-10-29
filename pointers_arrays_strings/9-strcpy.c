#include "main.h"
/**
 *_strcpy - copy from src to dest
 *Return: start (the string)
 *@dest: the array where we put the string
 *@src: the array which we take the string from
 *
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
