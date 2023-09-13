#include "main.h"

/**
  * print_alphabet_x10 - print the alphabet 10 times.
  *
  * Return: Always 0.
  */
void print_alphabet_x10(void)
{
	char lower_case;
	int line;

	line = 0;

	while (line <= 9)
	{
		for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
		{
			_putchar(lower_case);
		}
		_putchar('\n');
		line++;
	}
}
