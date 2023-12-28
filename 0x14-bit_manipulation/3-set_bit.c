#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * @n: pointer to long int.
 * @index: unsigned integer.
 * Return: 1 on success and -1 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
