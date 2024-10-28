#include "main.h"
/**
 *_isupper - tell for upper case
 *@c: the input
 *Return: 1 (yes) 0 (no)
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
