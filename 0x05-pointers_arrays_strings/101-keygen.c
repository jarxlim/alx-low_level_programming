#include "main.h"
/**
 * main - generates random passwords for 101-crackme
 * Return: void
 */
int main(void)
{
	srand(time(NULL));
	
	char password[PASSWORD_LENGTH + 1];
	
	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int c;
		
		do
		{
			c = rand() % 127;
		}
		while (!isalnum(c));
		password[i] = c;
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("%s\n", password);
       	return (0);
}
