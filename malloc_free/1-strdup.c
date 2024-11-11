#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of str
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if memory was insufficient
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	/* Check if input string is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	while (str[len] != '\0')
		len++;

	/* Allocate memory for the duplicate string, including the null terminator */
	duplicate = (char *)malloc(sizeof(char) * (len + 1));

	/* Check if memory allocation was successful */
	if (duplicate == NULL)
		return (NULL);

	/* Copy each character from the input string to the newly allocated space */
	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	/* Add null terminator at the end of the duplicated string */
	duplicate[len] = '\0';

	return (duplicate);
}
