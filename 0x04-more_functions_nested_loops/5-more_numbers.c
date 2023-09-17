#include "main.h"

/**
  * more_numbers -  prints 10 times the numbers, from 0 to 14.
  *
  * return: the numbers 10 times.
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
