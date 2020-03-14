#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: size
 * Return: 0 always
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	/** start my list */
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
