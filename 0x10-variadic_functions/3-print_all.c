#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - a function that prints anything
 * @format: A string of characters representing the argument types.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);

	char c;
	int i;
	float f;
	char *s;

	int print_check = 0;

	while ((c = *(format++)))
	{
		switch (c)
		{
			case 'c':
				i = va_arg(args, int);
				printf("%c", i);
				print_check = 1;
				break;

			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				print_check = 1;
				break;

			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				print_check = 1;
				break;

			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				print_check = 1;
				break;

			default:
				break;
		}
		if (*format)
		{
			if (print_check)
			{
				printf(", ");
				print_check = 0;
			}
		}
	}

	printf("\n");
	va_end(args);
}
