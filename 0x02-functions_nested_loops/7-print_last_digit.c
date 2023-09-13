#include "main.h"
#include <limits.h>

/**
  * print_last_digit - Prints last digit of a number.
  * @num: last digit.
  *
  * Return: value of the last digit.
  */
int print_last_digit(int num)
{
	int last_dig;

	if (num < 0)
		num = -num;
	if (num == INT_MIN)
		last_dig = 8;
	else
		last_dig = num % 10;
	_putchar('0' + last_dig);
	return (last_dig);
}
