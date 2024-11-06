#include <stdio.h>
/**
 * main - write each argument
 * @argc: the number of argument
 * @argv: the arguments
 * Return: 0 (succes)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
