#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: The matrix of integer
 * @size: The size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int index;
	int sum1 = 0;
	int sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}
	a -= size;
	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
