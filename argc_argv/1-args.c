#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: Argument count.
 * @argv: Array of argument strings (unused).
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void)argv;  /* Suppress unused variable warning */
	printf("%d\n", argc - 1);
	return (0);
}