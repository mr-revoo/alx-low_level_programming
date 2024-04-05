#include <unistd.h>
/**
* _putchar - write putchar c
* @ch : character to be printed
*
* Return: success 1.
*/

int _putchar(char ch)
{
    return (write(1, &ch, 1));
}
