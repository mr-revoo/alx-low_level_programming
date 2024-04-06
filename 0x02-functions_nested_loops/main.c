#include "main.h"

/**
* main - Testing Functions Going here
*
* Return: Always 0
*/

int main(void)
{
	/* print_alphabet();*/
	/*print_alphabet_x10();*/
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
