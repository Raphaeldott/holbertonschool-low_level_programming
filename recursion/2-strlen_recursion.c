#include "main.h"
/**
 *_strlen_recursion - every recurv it can make means the lenght
 *@s: the string
 *Return: 0 to exit (1 + _strlen_recursion(s + 1)) to have lenght
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
