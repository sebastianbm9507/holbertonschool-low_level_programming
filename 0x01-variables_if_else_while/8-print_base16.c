#include <stdio.h>
/**
 * main - function main where the programs start
 *
 * Return: return 0
 */
int main(void)
{
	char letra;
	int numero;

	for (numero = 0; numero <= 9; numero++)
	{
		putchar(numero + '0');
	}
	for (letra = 'a'; letra <= 'f'; letra++)
	{
		putchar(letra);
	}
	putchar('\n');
	return (0);
} /* End of the program */
