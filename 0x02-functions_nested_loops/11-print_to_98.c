#include <stdio.h>
/**
 * print_to_98 - Entry point
 *
 * @n: Input integer number
 *
 * Return: 0 (Success)
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n)
}
