#include <stdio.h>

/**
* main - MainFunction
* Return: 0
*/

int main(void)
{
	for (int i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
		{
			i++;
		}
		putchar(i);
	}
	return (0);
}
