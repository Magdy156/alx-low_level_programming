#include "main.h"
/**
 * * print_alphabet - Entry point
 * * Return: 0 if success.
*/
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;

	}
	_putchar('\n');

}
