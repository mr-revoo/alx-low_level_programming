#include "main.h"
#include <stdio.h>

/**
* natural - prints sum of multiples of 3 and 5 of certian number
*
* Return: null
*/

void natural(void)
{
	int i = 0, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

}
