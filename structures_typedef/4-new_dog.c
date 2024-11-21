#include <stdlib.h>
#include "dog.h"
/**
 * copy_str - Creates a copy of a string
 * @str: The string to copy
 *
 * Return: Pointer to the newly allocated copy of the string,
 * or NULL if memory allocation fails.
 */

char *copy_str(char *str)
{
	char *copy;
	int len = 0;
	int i;

	while (str && str[len])
		len++;

	copy = malloc(len + 1);
	if (!copy)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog (dog_t), or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
		return (NULL);

	new_dog->name = copy_str(name);
	new_dog->owner = copy_str(owner);
	if (!(new_dog->name && new_dog->owner))
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
