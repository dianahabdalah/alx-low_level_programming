#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @number1: first number
 * @number2: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int number1, unsigned long int number2)
{
	int index, count = 0;
	unsigned long int current;
	unsigned long int exclusive = number1 ^ number2;

	for (index = 63; index >= 0; index--)
	{
		current = exclusive >> index;
		if (current & 1)
			count++;
	}

	return (count);
}
