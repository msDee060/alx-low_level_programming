#include "main.h"

/**
 * flip_bits - returns number of bits needed to
 * flip to get from one number to another.
 * @n: unsigned long int.
 * @m:the second number.
 *
 * Return: number of bits needed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int new;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		new = exclusive >> i;
		if (new & 1)
			count++;
	}
	return (count);
}
