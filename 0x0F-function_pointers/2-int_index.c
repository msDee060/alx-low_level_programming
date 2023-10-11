#include "function_pointers.h"
#include <stdio.h>

/**
  * int_index - searches for an integer.
  * @array: is the array of integers.
  * @size: is the size of the array.
  * @cmp: function pointers.
  * Return: index of first element.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
