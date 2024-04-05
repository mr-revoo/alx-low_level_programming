#include <stdio.h>

/**
* main - Mainfunction
* Return: 0
*/

int main(void)
{
	int i = 97, j = 65;

	while (i < 123)
	{
		putchar(i++);
	}
	while (j < 91)
	{
		putchar(j++);
	}
	putchar('\n');
	return (1);
}
