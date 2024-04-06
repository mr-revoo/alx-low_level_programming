#include "main.h"

/**
 * jack_bauer - prints ever minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0 ; j < 60; j++)
		{
			int fi = i / 10 % 10, si = i % 10, fj = j / 10 % 10, sj = j % 10;

			_putchar(fi + 48);
			_putchar(si + 48);
			_putchar(':');
			_putchar(fj + 48);
			_putchar(sj + 48);
			_putchar('\n');
		}
	}
}
