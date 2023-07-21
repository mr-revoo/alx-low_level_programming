#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char let;

	for (int i = 0 ; i < 10 ; i++)
	{
		for (let = 'a'; let <= 'z' ; let++)
		{
			_putchar(let);
		}

		_putchar('\n');
	}
}
