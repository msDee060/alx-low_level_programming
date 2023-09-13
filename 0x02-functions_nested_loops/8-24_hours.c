#include "main.h"

/**
  * jack_bauer - prints every minute of the day from 00:00 TO 23:59.
  *
  * Return: returns time in 24 hour notation.
  */
void jack_bauer(void)
{
	int hr, minutes;

	for (hr = 0; hr < 24; hr++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
