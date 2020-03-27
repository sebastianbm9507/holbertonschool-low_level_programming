#include "holberton.h"
/**
 * binary_to_uint - Converts binary number to unsigned int.
 * @b: binary number to convert
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i;

	/** checking NULL */
	if (b == NULL)
		return (0);
	/** going through b*/
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = (result * 2) + (b[i] - '0');
	}
	return (result);
}
