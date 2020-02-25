#include "holberton.h"

/**
 * print_diagsums -
 *
 * Return: 
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sumadiag = 0;

	for ( i = 0; i < size; i++)
	{
		if (i == j)
		sumadiag += a[i][j];
	}
	
	

	printf("%d", sumadiag);
}