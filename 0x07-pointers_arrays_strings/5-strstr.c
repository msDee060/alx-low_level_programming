#include "main.h"
#include <stdio.h>

/**
  * _strstr -  locates a substring.
  * @haystack: string.
  * @needle: the charcter.
  * Return: a pointer to the beginning of located substring.
  */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;

		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
