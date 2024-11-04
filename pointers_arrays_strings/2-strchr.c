#include "main.h"
/**
 *_strchr - locates a char
 *@s: the string
 *@c: the char
 *Return: s or 0
 *
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
