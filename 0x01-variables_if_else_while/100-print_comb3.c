#include <stdio.h>
/**
 * main - Entyr point
 * Description:  prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int m;

	int n;

	for (m = '0'; m <= '9'; m++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if (m < n)
			{
				putchar(m);
				putchar(n);

				if (m != '8' || (m == '8' && n != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
