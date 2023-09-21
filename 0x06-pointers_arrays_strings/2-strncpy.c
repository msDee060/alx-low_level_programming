#include "main.h"

/**
  * _strncpy -  copies a string.
  * @dest: the destination.
  * @src: the source.
  * @n: the integer.
  * Return: a copy.
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_s = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (dest_s);
}
