#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that invoke
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int param1, param2, res;
	char *operator = argv[2];
	/** catching the operator for argument */
	param1 = atoi(argv[1]);
	param2 = atoi(argv[3]);
	if (argc != 4 || argv == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	if (((*operator == '/') || (*operator == '%')) && (param2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	res = (*get_op_func(operator))(param1, param2);
	printf("%d\n", res);
	return (0);
}
