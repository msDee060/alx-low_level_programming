#include "lists.h"

/**
  * free_listint2 - frees a listint_t, sets head to NULL.
  * @head: is the pointer to head pointer.
  * Return: nothing.
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;
}
