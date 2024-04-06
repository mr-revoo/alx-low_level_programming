#include <stdio.h>

/**
* _isalpha - cheching if the character sent is a alphabet or not
* @c: the integer the will be checked by
* Return: 1 if it's alphabet and 0 if it isn't
*/

int _isalpha(int c)
{
	if ((c >= 97 && c < 123) || (c >= 65 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
