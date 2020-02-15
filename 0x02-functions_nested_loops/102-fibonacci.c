#include"holberton.h"
/**
 * main - execute
 *
 *
 * Return: 0i
 */
void main(void)
{
	int inicio = 1;
	int segundo = 2;
	int resultado;
	int i;

	printf("%d", inicio);
	putchar(',');
	putchar(' ');
	printf("%d", segundo);
	putchar(',');
	putchar(' ');
		for (i = 0 ; i  <= 49 ; i++)
		{
			resultado = inicio + segundo;
			printf("%d", resultado);
			putchar(',');
			putchar(' ');
			inicio = segundo;
			segundo = resultado;
		}
		putchar('\n');
}
