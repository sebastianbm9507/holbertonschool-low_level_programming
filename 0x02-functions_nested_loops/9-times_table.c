#include"holberton.h"
/**
 * times_table - print the table till 0 to 9
 *
 * @void
 *
 * Return: 1 or 0
 */
void times_table(void)
{
	int i,j,result,fd,ld;

	for(i = 0; i <= 9 ; i++)
	{
		for(j = 0; j <= 9 ; j++)
		{
			result = (i*j);
			if (result > 9)
			{
				fd = result / 10;
				ld = result % 10;
				_putchar(fd + '0');
				_putchar(ld + '0');
			}
			else
			{
				_putchar('-');
				_putchar(result + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
