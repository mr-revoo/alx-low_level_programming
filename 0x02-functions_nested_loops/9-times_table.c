#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0, n = i * j ; j < 10; j++, n = i * j)
		{
			if (n >= 10)
			{
				int f = n / 10 % 10, s = n % 10;

				_putchar(' ');
				_putchar(f + 48);
				_putchar(s + 48);
			}
			else
			{
				if (n == 0)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(0 + 48);
				}
				else
				{
					if (n != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(n + 48);
				}
			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
