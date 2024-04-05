#include <stdio.h>

/**
* main - MainFunction
* Return: 0
*/

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i == 101 || i == 113)
		{
			i++;
		}
		putchar(i++);
	}
	putchar('\n');
	return (0);
}
