#include "main.h"
/**
 *_atoi - almost like atoi function
 *Return: num * sign (number)
 *@s: string
 *
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
		s++;
	}
	return (num * sign);
}
