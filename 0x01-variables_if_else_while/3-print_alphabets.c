#include <stdio.h>
/**
 * main - function main where the programs start
 *
 * Return: return 0
 */
int main(void)
{
	char i;
	char A;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
} /* End of the program */
