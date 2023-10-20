#include "lists.h"

/**
  * list_len - shows number of elements in a linked list.
  * @h: is the head.
  * Return: number of elements.
  */
size_t list_len(const list_t *h)
{
	int index;

	if (h == NULL)
		return (0);

	for (index = 1; h->next != NULL; index++)
	{
		h = h->next;
	}
	return (index);
}
