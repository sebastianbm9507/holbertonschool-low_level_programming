#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print diagonal
 * @a: array in
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + i];
		s2 = s2 + a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", s1, s2);
}
