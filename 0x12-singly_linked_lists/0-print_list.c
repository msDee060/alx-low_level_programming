#include "lists.h"

/**
  * print_list - prints all the elements of a list_t.
  * @h: is the head.
  * Return: number of nodes.
  */
size_t print_list(const list_t *h)
{
	int index;

	if (h == NULL)
		return (0);
	for (index = 1; h->next != NULL; index++)
	{
		if (h->str == NULL)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (index);
}
