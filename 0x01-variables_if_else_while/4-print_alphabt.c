#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar((letter == 'q' || letter == 'e') ? toupper(letter) : letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
