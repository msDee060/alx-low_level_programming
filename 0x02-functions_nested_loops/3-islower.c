#include "main.h"

/**
  * _islower - checks if a character is lowercase.
  * @c: is the character to check.
  *
  * Return: 1 if c is lowercase, otherwise returns 0.
  */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
