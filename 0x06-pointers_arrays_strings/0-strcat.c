#include "main.h"

/**
  * _strcat - concatenates two strings.
  * @dest: is the destination.
  * @src: is the source.
  * Return: a pointer to resulting string.
  */
char *_strcat(char *dest, char *src)
{
	char *dest_p = dest;

	while (*dest_p != '\0')
	{
		dest_p++;
	}

	while (*src != '\0')
	{
		*dest_p = *src;
		src++;
		dest_p++;
	}
	*dest_p = '\0';

	return (dest);

}
