#include <stdio.h>
/**
 * main -entry of the function
 * Sizeof - return the size
 * Return: 0 (success)
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
return (0);
}
/* function prints the size of the types */
