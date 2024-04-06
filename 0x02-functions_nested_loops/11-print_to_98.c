#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - printf from n to 98
 * @n: the start value
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
		printf("%d\n", n);
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{	printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		printf("\n");
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		printf("\n");
	}
}
