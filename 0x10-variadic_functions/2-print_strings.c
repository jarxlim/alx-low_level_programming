#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str =  va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		printf("%s", str);
		
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
