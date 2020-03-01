#include <stdio.h>
/**
 * main - prints all the parameters
 * @argc: int parameter with the size of argv
 * @argv: char array of parameter passed to the program
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
