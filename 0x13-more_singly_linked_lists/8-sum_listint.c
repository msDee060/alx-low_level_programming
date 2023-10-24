#include "lists.h"

/**
  * sum_listint - returns the sum of all data in the list.
  * @head: pointer to the list.
  * Return: sum, 0 if list is empty.
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
