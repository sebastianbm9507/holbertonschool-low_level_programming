#include "holberton.h"
/**
 * get_bit - Locate a bit in a index
 * @n: position where bit is located
 * @index: index
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = (sizeof(unsigned int) * 8);

	if (index < bits)
	{
		return ((n >> index) & 1);
	}
	else
	{
		return (-1);
	}
}
