#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @n: pointer
 * @index: index 
 * Return: 1 for (success), -1 for (fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
