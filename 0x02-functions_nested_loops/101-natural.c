#include "main.h"
#include <stdio.h>

/**
* natural - prints sum of multiples of 3 and 5 of certian number
*
* Return: null
*/

void natural(void)
{
	long i = 0, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%ld\n", sum);

}

/**
* main - MainFunction
* Return: 0
*/


int main(void)
{
	natural();
	return (0);
}
