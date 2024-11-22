#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - Prints a character.
 * @args: A va_list containing the argument to print.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer.
 * @args: A va_list containing the argument to print.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: A va_list containing the argument to print.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: A va_list containing the argument to print.
 *         If the string is NULL, it prints "(nil)".
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char*);

	if (!str)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints arguments based on a format string.
 * @format: A constant string specifying the types of arguments to print.
 *          Supported types are:
 *          'c' for char, 'i' for int, 'f' for float, 's' for string.
 *          Any unsupported type is ignored.
 *
 * Description: Iterates through the format string and uses an array of
 *              format_spec structures to map each format specifier to
 *              the appropriate print function. Commas are printed between
 *              arguments where necessary.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int j, i = 0;
	char *printed = ""; /* Initially empty, no comma before the first argument */

	/* Array of structures holding type and corresponding print function */
	format_spec_t print_funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}  /* NULL terminator to indicate the end */
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (print_funcs[j].type != '\0')
		{
			if (format[i] == print_funcs[j].type)
			{
				printf("%s", printed);
				print_funcs[j].print_func(args);
				printed = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
