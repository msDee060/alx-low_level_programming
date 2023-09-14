#include "main.h"

/**
  * _isdigit - checks for a digit (0 through 9)
  * @c: is the digit
  *
  * Return: 1 if c is a digit otherwise return 0.
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
