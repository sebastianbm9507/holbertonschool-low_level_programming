#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - printing strings
 * @separator: separator
 * @n: size
 * Return: 0 walways
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		return;
	/** start my list */
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
