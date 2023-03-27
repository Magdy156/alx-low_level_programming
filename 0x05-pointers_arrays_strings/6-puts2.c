#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: the string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int length = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	for (i = 0 ; i <= length - 1 ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
