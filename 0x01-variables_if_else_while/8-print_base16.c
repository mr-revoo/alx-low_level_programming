#include <stdio.h>

/**
* main - Mainfunction
* Return: 0
*/

int main(void)
{
	int chara = 97, num = 48;

	while (num <= 57)
	{
		putchar(num++);
	}
	while (chara < 103)
	{
		putchar(chara++);
	}
	putchar('\n');
	return (0);
}
