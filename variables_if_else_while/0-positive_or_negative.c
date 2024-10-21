#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of the number
 * Return: 0 (success)
 * @argv: is used to input the parameter from the terminal
 * @argc: is the number of parameters
 */
int main(int argc, char *argv[])
{
int n = atoi(argv[1]);
if (argc != 2)
printf("%s ", argv[0]);
if (n > 0)
printf("%d is positive\n", n);
if (n < 0)
printf("%d is negative\n", n);
if (n == 0)
printf("%d is zero\n", n);
return (0);
}
/* tell if the number is positive or negative */
