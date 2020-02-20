#include"holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer char parameter destination
 * @n: source char pointer parameter
 */
void reverse_array(int *a, int n)
{
	int i, temp, tamanio;

	tamanio = n - 1;
	i = 0;
	while (i < tamanio)
	{
		
		temp = a[i];
		a[i] = a[tamanio];
		a[tamanio] = temp;
		i++;
		tamanio--;
	}
}
