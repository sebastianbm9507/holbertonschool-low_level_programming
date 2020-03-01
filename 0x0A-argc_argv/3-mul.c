#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply 2 parameters
 * @argc: int parameter with the size of argv
 * @argv: char array of parameter passed to the program
 * Return: 1 error , 0 succesfull
 */
int main(int argc, char **argv)
{
	int first, second, result, i = 1;

	argc -= 1;
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		first = atoi(argv[i]);
		second = atoi(argv[i + 1]);
		result = first * second;

		printf("%d\n", result);
	}
	return (0);
}
