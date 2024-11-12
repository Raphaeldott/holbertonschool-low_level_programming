#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space in memory
 * containing s1 followed by s2 and null terminated, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1 = 0, len2 = 0;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 */
	while (s1[len1] != '\0')
		len1++;

	/* Calculate the length of s2 */
	while (s2[len2] != '\0')
		len2++;

	concat = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	/* Check if memory allocation was successful */
	if (concat == NULL)
		return (NULL);

	/* Copy characters from s1 to concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy characters from s2 to concat, starting from the end of s1 */
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	/* Add null terminator at the end of the concatenated string */
	concat[i + j] = '\0';

	return (concat);
}
