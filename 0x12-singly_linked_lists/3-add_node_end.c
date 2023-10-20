#include "lists.h"
int len(const char *str);

/**
  * add_node_end - add new node at the end of a list.
  * @head: is the head.
  * @str: is the string.
  * Return: address of the new element, or NULL if it failed.
  */
list_t *add_node_end(list_t **head, const char *str)
{

}

/**
  * len - length of a string.
  * @str: is the string.
  * Return: the length.
  */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
