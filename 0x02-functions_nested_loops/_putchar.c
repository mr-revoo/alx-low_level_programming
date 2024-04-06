#include <unistd.h>
#include "main.h"
/**
 * _putchar - Entry point
 * @c: charcter value
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
