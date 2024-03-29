#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area
 *
 * @n: function copies
 * @src: byte from memory area
 * @dest: to memory area
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
