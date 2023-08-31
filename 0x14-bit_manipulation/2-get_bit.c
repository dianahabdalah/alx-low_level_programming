#include "main.h"

/**
 * get_bit - returns the value of a bit at specified index in a decimal number
 * @number: decimal number to search
 * @index: index of the bit
 *
 * Return: value of the bit at the index, or -1 if index is out of range
 */
int get_bit(unsigned long int number, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (number >> index) & 1;

	return (bit_value);
}
