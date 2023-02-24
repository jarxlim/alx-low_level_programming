#include "stdio.h"

/**
 * main - Entry point
 * Return: Always o
 */

int main(void)
{
	int t;

	for (t = 1; t <= 100; t++)
	{
		if (t % 3 == 0 && t % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (t % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (t % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", t);
		}
	}
	printf("\n");
	return (0);
}
