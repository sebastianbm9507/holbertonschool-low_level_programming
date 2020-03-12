#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Perform basics operations of a calculator
 * @argc: number of arguments passed by command line
 * @argv: vector of arguments passed by command line
 * Return: Operation value
 */
int main(int argc, char **argv)
{
	int param1, param2, res;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	param2 = atoi(argv[3]);
	if (((*operator == '/') || (*operator == '%')) && (param2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	param1 = atoi(argv[1]);
	res = (*get_op_func(operator))(param1, param2);
	printf("%d\n", res);
	return (0);
}
