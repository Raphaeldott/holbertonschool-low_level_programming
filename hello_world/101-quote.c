#include <unistd.h>
/**
 * main - must print a error message
 * write is instructed to display in the standar error 2
 * Return: 1 (error)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str, sizeof(str) - 1);
	return (1);
}
