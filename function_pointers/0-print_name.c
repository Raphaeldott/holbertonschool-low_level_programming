#include <stdlib.h>

/**
 * print_name - prints a name using a given function
 * @name: the name to print
 * @f: a pointer to a function that takes a char * and returns void
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
