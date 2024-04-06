#include <stdio.h>

/**
* _islower - checks if the char is in lowercase
* @c: the charcter the will be converted to decimal
* Return: 1 if c is lowercase and 0 if not
*/

int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
