#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 0;

	if (number < 10)
	{
		putchar('0' + number);
		number++;
	}
	putchar('\n');
	return (0);
}
