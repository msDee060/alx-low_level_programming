#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to newly allocated space i memory.
  * @str: is the string.
  * Return: NULL, or pointer on success.
  */
char *_strdup(char *str)
{
	int j = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}
	s = malloc(sizeof(char) * 1);

	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
