#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'A';

	while (letter <= 'z')
{
	putchar(tolower(letter));
	letter++;
}
	putchar('\n');
return (0);
}
