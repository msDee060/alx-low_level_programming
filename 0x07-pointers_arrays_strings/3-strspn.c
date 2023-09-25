#include "main.h"
#include <stdbool.h>

/**
  * _strspn - gets the length of a prefix substring.
  * @s: the string.
  * @accept: character.
  * Return: the number of bytes.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	bool found;

	int i;

	while (*s != '\0')
	{
		found = false;

		i = 0;

		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				length++;
				found = true;
				break;
			}
			i++;
		}
		if (!found)
			break;
		s++;
	}
	return (length);
}
