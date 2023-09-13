#include "main.h"

/**
  * print_last_digit - Prints last digit of a number.
  * @last_dig: last digit.
  *
  * Return: value of the last digit.
  */
int print_last_digit(int last_dig)
{
	int num;

	if (last_dig < 0)
		last_dig = -last_dig;
	num = last_dig % 10;
	_putchar('0' + num);
	return (num);
}
