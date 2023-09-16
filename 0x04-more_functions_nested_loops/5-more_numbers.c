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
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
			}
			else
			{
				_putchar('0' + i);
			}
		}
		_putchar('\n');
	}
}
