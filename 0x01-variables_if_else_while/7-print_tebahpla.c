#include <stdio.h>

/**
* main - Mainfunction
* Return: 0
*/

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i--);
	}
	putchar('\n');
	return (0);
}
