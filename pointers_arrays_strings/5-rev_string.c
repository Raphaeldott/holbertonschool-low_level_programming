#include "main.h"
/**
 *
 *
 *
 */
void rev_string(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
		length++;

	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
