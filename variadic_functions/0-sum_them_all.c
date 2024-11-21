#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *sum_them_all - sum of all args
 *@n: the arguments to sum
 *@...: specifiy its un undefined number of args
 *
 *Return: 0 (if n == 0) or sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;/* initialise the list of arguments */

	if (n == 0)
		return (0);
	va_start(args, n);/* starts to explore the list */
	for (i = 0; i < n; ++i)
		sum += va_arg(args, int);/* go take each arguments */
	va_end(args);/* clean the list */
	return (sum);
}
