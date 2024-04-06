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

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
