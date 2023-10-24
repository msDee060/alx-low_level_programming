#include "lists.h"

/**
  * listint_len - returns number of elements in a linke list.
  * @h: is the head pointer.
  * Return: number of elements.
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
