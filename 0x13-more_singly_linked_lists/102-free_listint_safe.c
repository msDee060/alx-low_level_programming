#include "lists.h"

/**
  * free_listp2 - frees the linked list.
  * @head: head of the list.
  * Return: nothing.
  */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
  * free_listint_safe - frees a linked list.
  * @h: is the pointer to the list.
  * Return: size of the list that was free'd.
  */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hdptr, *newNode, *add;
	listint_t *curr;

	hdptr = NULL;
	while (*h != NULL)
	{
		newNode = malloc(sizeof(listp_t));

		if (newNode == NULL)
			exit(98);

		newNode->p = (void *)*h;
		newNode->next = hdptr;
		hdptr = newNode;

		add = hdptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hdptr);
				return (nnodes);
			}
		}
		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}
	*h = NULL;
	free_listp2(&hdptr);
	return (nnodes);
}
