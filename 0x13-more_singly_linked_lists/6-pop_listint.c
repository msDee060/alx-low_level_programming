#include "lists.h"

/**
  * pop_listint - deletes the head node.
  * @head: is the pointer to the list.
  * Return: the head node data.
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
