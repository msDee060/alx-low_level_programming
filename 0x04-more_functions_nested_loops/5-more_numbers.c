#include "main.h"

/**
  * more_numbers - prints 10 times from 0 to 14.
  *
  * Return: answer.
  */
void more_numbers(void)
{
	int repeat, i;

	for (repeat = 0; repeat < 10; repeat++)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar('0' + i);
		}
		_putchar('\n');
	}
}
