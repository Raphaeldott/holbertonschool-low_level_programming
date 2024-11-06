#include <stdio.h>
/**
 * main - Prints the program name followed by a new line.
 * @argc: Argument count (unused).
 * @argv: Array of argument strings.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return 0;
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
if (argc < 2)
{
// Program is invoked without additional arguments, but still prints its name
}
printf("%s\n", argv[0]);
return 0;
}
*/
