#include "lists.h"

/**
  * create_new - creates a new node.
  * @n: the data of the node.
  * Return: a pointer to the node.
  */
listint_t *create_new(int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	return (newNode);
}

/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: pointer to the list.
  * @idx: is the index.
  * @n: in the data.
  * Return: address of the new node, or NULL on failure.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *old_temp;
	listint_t *newNode;

	temp = *head;
	if (head == NULL)
		return (NULL);
	newNode = create_new(n);
	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	if (idx == 0)
		*head = newNode;
	for (i = 0; i < idx - 1 && temp != NULL && idx != 0; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		newNode->next = temp;
	else
	{
		old_temp = temp->next;
		temp->next = newNode;
		newNode->next = old_temp;
	}
	return (newNode);
}
