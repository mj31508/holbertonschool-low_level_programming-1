#include "holberton.h"
/**
 * times_table - times table to 9
 * @void - void function
 * Description - times table to 9
 * section header: Section description
 * return: void
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (j = 0; j < 10; ++j)
	{
		_putchar('0');
		for (i = 1; i < 10; i++)
		{
			k = i * j;
			if (k > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(k + '0');
			}
		}
		_putchar('\n');
	}

}
