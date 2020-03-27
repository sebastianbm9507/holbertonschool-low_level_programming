#include "holberton.h"
/**
 * set_bit - Sets  value of a bit to 1 at index given.
 * @n: number to get the bit in the index position.
 * @index: Bit position.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = (sizeof(unsigned int) * 8);
	/** checking index */
	if (index > bits)
		return (-1);
	/**--------*/
	*n = *n | (1 << index);
	return (1);
}
