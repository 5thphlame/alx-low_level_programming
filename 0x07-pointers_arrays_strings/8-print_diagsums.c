#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sums of diagonals of square matrix
 * @a: 2d matrix
 * @size: size of matrix
 * Return: printed sums
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2, len;

	len = size * size;
	i = 0;
	sum1 = 0;
	sum2 = 0;

	while (i < len)
	{
		if (i % (size - 1) == 0 && i > 0 && i < (len - 1))
			sum2 += *(a + i);
		if (i % (size + 1) == 0)
			sum1 += *(a + i);
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}