#include"holberton.h"
/**
 * reverse_array - a function that reverses the content of an array of integers.
 * @a: pointer char parameter destination
 * @n: source char pointer parameter
 */
void reverse_array(int *a, int n)
{
	int i, temp;
	i = 0;
	n--;
	while (a[i] < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
	
}
