#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line.
 * Return: Always 0.
 */

void print_square(int size)
{
        int i = 0, b;

        while (i < size && size > 0)
        {
                b = 0;
                while (b < size)
                {
                        _putchar('#');
                        b++;
                }
                _putchar('\n');
                i++;
        }
        if (i == 0)
                _putchar('\n');
}
