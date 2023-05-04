#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 *         string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result <<= 1;
		result += b[i] - '0';
	}

	return (result);
}

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char *binary = "10101010101010101010";
	unsigned int decimal;

	decimal = binary_to_uint(binary);
	printf("The decimal equivalent of %s is %u\n", binary, decimal);

	return (0);
}
