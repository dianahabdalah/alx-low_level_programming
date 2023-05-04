#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if the system is big endian, or 1 if it's little endian
 **/
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *)&i;
if (*c)
return (1);
else
return (0);
}
