#include"holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer char parameter destination
 * @n: source char pointer parameter
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n--;
	i = 0;
	while (a[i] < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
