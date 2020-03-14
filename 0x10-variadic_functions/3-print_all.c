#include "variadic_functions.h"
#include <stdarg.h>
/**
 * fn_char - function that prints a char
 * @lista: va_list argument
 * Return: 0
 */
void fn_char(va_list lista)
{
	printf("%c", va_arg(lista, int));
}
/**
 * fn_integer - function that prints a integer
 * @lista: va_list argument
 * Return: 0
 */
void fn_integer(va_list lista)
{
	printf("%d", va_arg(lista, int));
}
/**
 * fn_float - function that prints a float
 * @lista: va_list argument
 * Return: 0
 */
void fn_float(va_list lista)
{
	printf("%f", va_arg(lista, double));
}
/**
 * fn_string - function that prints a string
 * @lista: va_list argument
 * Return: 0
 */
void fn_string(va_list lista)
{

	char *ptr = va_arg(lista, char *);

	if (ptr == NULL)
		ptr = "(nil)";
	printf("%s", ptr);
}
/**
 * print_all - print all
 * @format: format specified
 * Return: always 0
 */
void print_all(const char * const format, ...)
{
	/** args is storing my arguments */
	va_list args;
	int i, j;
	char *space = "";

	f_t formats[] = {
		{'c', fn_char},
		{'i', fn_integer },
		{'f', fn_float},
		{'s', fn_string}
		};

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == formats[j].sign)
			{
				printf("%s", space);
				formats[j].f(args);
				space = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");

}
