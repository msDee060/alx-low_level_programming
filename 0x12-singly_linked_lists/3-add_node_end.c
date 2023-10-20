#include "lists.h"
int len(const char *str);
list_t *create_node(const char *str);

/**
  * add_node_end - add the node at the end of list.
  * @head: is the head.
  * @str: is the string.
  * Return: address of the new element, or NULL if it failed.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *newNode;

	temp = *head;
	if (head == NULL)
		newNode = create_node(str);
	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	return (*head);
}

/**
  * create_node - create new node.
  * @str: is the string.
  * Return: a node.
  */
list_t *create_node(const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = len(str);
	newNode->next = NULL;
	return (newNode);
}

/**
  * len - length of string.
  * @str: is the string.
  * Return: length of string.
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
