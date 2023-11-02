#include "main.h"
#include <limits.h>

/**
  * print_number - prints an integer.
  * @n: is the integer.
  * Return: number.
  */
void print_number(int n)
{
	if (n == INT_MIN)
	{
		print_number(INT_MAX / (-10));
		_putchar('8');
	}
	else if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
	else if (n >= 10)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
