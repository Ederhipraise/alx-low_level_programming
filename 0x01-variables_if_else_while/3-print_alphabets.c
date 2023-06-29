#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{

	char lowercase = 'A';

	char uppercase = 'a';

	while (lowercase <= 'Z')
	{
		putchar(tolower(lowercase));
		lowercase++;
	}
	while (uppercase <= 'z')
	{
		putchar(toupper(uppercase));
		uppercase++;
	}
	putchar ('\n');
	return (0);
}
