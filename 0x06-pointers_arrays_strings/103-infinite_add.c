#include "main.h"
#include <string.h>
/**
 * infinite_add - function that adds two numbers.
 * @n1: first param
 * @n2: second para
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;
	int l;

	while (i >= 0 || j >= 0)
	{
		int digit1 = i >= 0 ? n1[i] - '0' : 0;
		int digit2 = j >= 0 ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		if (k >= size_r - 1)
		{
			return (0);
		}
		r[k++] = sum % 10 + '0';
		carry = sum / 10;
		i--;
		j--;
	}
	if (carry != 0)
	{
		if (k >= size_r - 1)
		{
			return (0);
		}
			r[k++] = carry + '0';
	}
	r[k] = '\0';
	for (l = 0; l < k / 2; l++)
	{
		char temp = r[l];

		r[l] = r[k - l - 1];
		r[k - l - 1] = temp;
	}
	return (r);
}
