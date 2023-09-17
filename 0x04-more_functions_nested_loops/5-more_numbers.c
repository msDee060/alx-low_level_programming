#include "main.h"

/**
  * more_numbers - prints 10 times from 0 to 14.
  *
  * Return: answer.
  */
void more_numbers(void)
{
	int repeat, num;

	for (repeat = 0; repeat <= 10; repeat++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar('0' + (num / 10));
			}
				_putchar('0' + (num % 10));
		}
		_putchar('\n');
	}
}
