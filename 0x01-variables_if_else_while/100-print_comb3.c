#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int firstDigit;

	int secondDigit;

	for (firstDigit = 0; firstDigit <= 10; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit < 10; secondDigit++)
		{
			putchar(firstDigit + '0');
			putchar(secondDigit + '0');
			if (firstDigit != 8 || secondDigit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
