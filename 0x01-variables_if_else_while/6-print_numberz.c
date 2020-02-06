#include <stdio.h>
/**
 * main - function main where the programs start
 *
 * Return: return 0
 */
int main(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
return (0);
} /* End of the program */
