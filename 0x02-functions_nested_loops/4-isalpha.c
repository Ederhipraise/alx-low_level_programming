#include "main.h"
/**
 * _isalpha - Entry point
 *
 * @c: ASCII character
 *
 * Return: 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}