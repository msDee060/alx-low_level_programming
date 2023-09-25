#include "main.h"

/**
  * _memset -  fills memory with a constant byte.
  * @s: is the string.
  * @b: is a character.
  * @n: the integer.
  * Return: the constant byte b.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
