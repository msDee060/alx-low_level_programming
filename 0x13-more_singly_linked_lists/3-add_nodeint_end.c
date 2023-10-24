#include "lists.h"

/**
* add_nodeint_end - adds new node at the end of listint_t.
* @head: is the pointer pointing to the head pointer.
* @n: integer to be added to new node.
* Return: address of the new element,
* or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode;
listint_t *tmp;

(void)tmp;

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = NULL;
tmp = *head;
if (*head == NULL)
{
*head = newNode;
}
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = newNode;
}
return (*head);
}
