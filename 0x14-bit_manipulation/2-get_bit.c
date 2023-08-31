#include "main.h"

/**
 * get_bit - returns the value of a bit at specified index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit at the given index, or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	int bit_value = (n >> index) & 1;

	return (bit_value);
}
