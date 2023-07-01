#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: Input integer number
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		_putchar(-a + 48);
		return (-a);
	}
	else
	{
		_putchar(a + 48);
		return (a);
	}
}
