#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		if ((n != 'q' && n != 'e') && n <= 'z')
			putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
