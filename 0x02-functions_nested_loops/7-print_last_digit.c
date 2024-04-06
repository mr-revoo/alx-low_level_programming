#include "main.h"
#include <stdio.h>

/**
* print_last_digit - prints the last digit of number
* @n: number that will be used
* Return: last
*/

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + 48);
	return (last);
}
