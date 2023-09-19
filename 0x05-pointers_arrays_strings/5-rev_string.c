#include "main.h"

/**
  * rev_string - reverses a string.
  * @s: is the string.
  * Return: void.
  */
void rev_string(char *s)
{
	int leng = 0, index = 0;

	char tmp;

	while (s[index++])
	{
		leng++;
	}
	for (index = leng - 1; index >= leng / 2; index--)
	{
		tmp = s[index];
		s[index] = s[leng - index - 1];
		s[leng - index - 1] = tmp;
	}
}
