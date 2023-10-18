#include "main.h"
#include <stdlib.h>

/**
  * argstostr - concates all arguments of your program.
  * @ac: argument count.
  * @av: argument vector.
  * Return: a pointer to a new string.
  */
char *argstostr(int ac, char **av)
{
	char *out;
	int index, j, k = 0, s_leng = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	for (index = 0; index < ac; index++)
	{
		for (j = 0; av[index][j]; j++)
			s_leng++;
	}
	s_leng += ac;

	out = malloc(sizeof(char) * s_leng + 1);
	if (out == NULL)
		return (NULL);

	for (index = 0; index < ac; index++)
	{
		for (j = 0; av[index][j]; j++)
		{
			out[k] = av[index][j];
			k++;
		}
		if (out[k] == '\0')
		{
			out[k++] = '\n';
		}
	}
	return (out);
}
