#include "main.h"
/**
 *_isdigit - tell if digit
 *@c: input
 *Return: 1 (yes) 0 (no)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
