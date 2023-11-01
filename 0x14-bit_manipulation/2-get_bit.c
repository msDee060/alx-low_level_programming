#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index.
  * @n: is the number.
  * @index: is the index.
  * Return: value of the bit at index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	return ((int)((n >> index) & 1));
}
