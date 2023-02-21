#include "main.h"

/**
 * main - Entry point
 * print_alphabet - prints the alphabet, in lowercase
 * Return: Always 0 (Success).
 */
void print_alphabet(void)
{

	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
			_putchar('\n');
}
