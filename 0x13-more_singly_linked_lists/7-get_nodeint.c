#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a list.
  * @head: is the head pointer to the list.
  * @index: is the index of the node.
  * Return: nth node.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index; j++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
