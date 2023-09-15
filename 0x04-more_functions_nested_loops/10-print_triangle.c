#include "main.h"

/**
  * print_triangle - Prints a triangle followed by a new line.
  *
  * @size: the size of the triangle.
  *
  * Return: size.
  */
void print_triangle(int size)
{
	int rows, columns, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 0; rows < size; rows++)
		{
			for (spaces = 0; spaces < size - rows - 1; spaces++)
			{
				_putchar(' ');
			}
			for (columns = 0; columns <= rows; columns++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
