#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: num to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int no_of_bits = sizeof(n) * 8;
	int printed = 0;

	while (no_of_bits)
	{
		if (n & 1L << --no_of_bits)
		{
		_putchar('1');
		printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		putchar ('0');
}
