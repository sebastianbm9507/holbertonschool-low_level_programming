#include "holberton.h"

/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: first string
 * @s2: second strings
 * @n: int parameter that limits the bytes of s2
 * Return: pointer to a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i, j;
	char *concat = NULL;
	/**treating s2 as an empty string if is NULL */
			if (s2 == NULL)
			{
				s2 = malloc(1),
				*s2 = '\0';
			}
			if (s1 == NULL)
			{
				s1 = malloc(1);
				*s1 = '\0';
			}
	/** get the size for s1*/
	size1 = 0;
	while (s1[size1] != '\0')
		size1++;
	/** get the size for s2*/
	size2 = 0;
	while (s2[size2] != '\0')
		size2++;
		/** checking if n is greater or equal than s2 lenght */
		if (n >= size2)
			size2 = size2;
		else
			size2 =  n;
		/**reserve the memory fot my concat string */
	concat = malloc(sizeof(int) * (size1 + size2 + 1));
	/** check if my concat was on succes */
	if (concat == NULL)
		return (NULL);
			/** concatenate s1 to my ptr */
			for (i = 0; i < size1; i++)
				concat[i] = s1[i];
			/** concatenate s2 to my ptr */
			for (j = 0; j < size2; i++, j++)
				concat[i] = s2[j];
			concat[i] = '\0';
	return (concat);
}

