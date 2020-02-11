#include"holberton.h"
/**
 * _abs - print a sign depends of the value of c
 *
 * @z: stand for the parameter
 *
 * Return: 1 or 0
 */
int _abs(int z)
{
	if (z == 0)
	{
		return (0);
	}
	else if (z > 0)
	{
		return (z);
	}
	else
	{
		z = -z;
		return (z);
	}
}
