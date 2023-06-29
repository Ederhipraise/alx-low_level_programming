#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 'A';

	while (letter <= 'Z')
{
	putchar(tolower(letter));
	letter++;
}
putchar('\n');
return (0);
}
