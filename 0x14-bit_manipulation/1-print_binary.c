#include "main.h"

/**
  * print_binary - prints the binary representation of a number.
  * @n: is the number.
  * Return: answer.
  */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << 63;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (m > 0)
	{
		if ((n & m) != 0)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1)
			_putchar('0');
		m >>= 1;
	}
}
