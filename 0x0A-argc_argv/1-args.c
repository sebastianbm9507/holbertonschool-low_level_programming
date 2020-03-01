#include <stdio.h>
/**
 * main - return the number of parameters
 * @argc: int parameter with the size of argv
 * @argv: char array of parameter passed to the program
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)(**argv);
	if (argc == 1)
	{
	printf("0\n");
	}
	else
	{
		argc--;
		printf("%d\n", argc);
	}
	return (0);
}
