#include "main.h"

/**
* print_sign - prints sign according to num status
* @n : number that will be checked
* Return: 0 if it is zero 1 if greater than 0 and -1 if smaller than 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
		_putchar('0');
		return (0);

}
