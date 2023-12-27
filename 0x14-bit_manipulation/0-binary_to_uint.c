#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int power;

	if (b == NULL)
		return (0);
	for (power = 0; b[power]; power++)
	{
		if (b[power] < '0' || b[power] > '1')
			return (0);
		result = 2 * result + (b[power] - '0');
	}
	return (result);
}
