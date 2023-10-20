#include "lists.h"
int len(const char *str);

/**
  * add_node - adds new node at the beginning of a list.
  * @head: is the head of the list.
  * @str: is the string.
  * Return: address of the new element, or NULL if it failed.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
		newNode->next = NULL;
	else
	{
		newNode->next = *head;
		newNode->str = strdup(str);
		newNode->len = len(str);
		*head = newNode;
	}
	return (*head);
}

/**
  * len - get length of string.
  * @str: is the string.
  * Return: the length of string.
  */
int len(const char *str)
{
	int index;

	if (str == NULL)
		return (0);

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}
