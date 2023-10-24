#include "lists.h"

/**
  * add_nodeint - adds new node to the beginning of a list.
  * @head: is the pointer to the head pointer.
  * @n: is the data.
  * Return: the address of the new element.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
		newNode->next = NULL;
	else
		newNode->next = *head;
	newNode->n = n;
	*head = newNode;

	return (*head);
}
