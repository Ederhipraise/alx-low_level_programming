#include "main.h"
/**
 * _abs - Entry point
 *
 * @n: Input integer number
 *
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
