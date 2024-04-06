#include <stdio.h>

/**
* print_alphabet_x10 - prints alphabet 10 times
* Return: NULL
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
