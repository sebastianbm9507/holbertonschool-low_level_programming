#include <stdio.h>
/**
 * main - return the name of the program
 * @argc: int parameter with the size of argv
 * @argv: char array of parameter passed to the program
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)(argc);
	printf("%s\n", argv[0]);
	return (0);
}
