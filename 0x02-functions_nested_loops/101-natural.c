#include "main.h"
/**
 * main - Prints the sum of all multiples of 3 || 5 up to 1024
 * Return: Always (Success)
 */

int main(void)
{
	int i;
	int sum = 0;
	
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
		i++;
	}
		printf("%d\n", sum);
		return (0);

}
