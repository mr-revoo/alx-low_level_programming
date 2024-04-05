#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: Printing all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, u;

	for (i = '0'; i <= '9'; i++)
		for (j = '0'; j <= '9'; j++)
			for (k = '0'; k <= '9'; k++)
				for (u = '0'; u <= '9'; u++)
					if (((i <= k) && (j < u)) || ((i < k) && (j <= u)))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(u);
						if (i != 57 || j != 56)
						{
						putchar(',');
						putchar(' ');
						}
					}

	}
	putchar('\n');
	return (0);
}
