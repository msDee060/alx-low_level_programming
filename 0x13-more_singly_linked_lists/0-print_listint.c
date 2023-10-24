#include "lists.h"

/**
  * print_listint - prints all elements of a listint_t.
  * @h: is the head pointer.
  * Return: the number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
