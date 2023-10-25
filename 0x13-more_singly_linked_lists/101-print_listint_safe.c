#include "lists.h"

void free_listp(listp_t **head);

/**
* print_listint_safe - prints a listint_t.
* @head: pointer to the list.
* Return: number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t nnodes = 0;
listp_t *hdptr;
listp_t *newNode, *add;

hdptr = NULL;
while (head != NULL)
{
newNode = malloc(sizeof(listp_t));

if (newNode == NULL)
return (98);
newNode->p = (void *)head;
newNode->next = hdptr;
hdptr = newNode;

add = hdptr;

while (add->next != NULL)
{
add = add->next;
if (head == add->p)
{
printf("-> [%p] %d\n", (void *)head, head->n);
free_listp(&hdptr);
return (nnodes);
}
}
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
nnodes++;
}
free_listp(&hdptr);
return (nnodes);
}

/**
* free_listp - frees the list.
* @head: pointer to the list.
* Return: nothing.
*/
void free_listp(listp_t **head)
{
listp_t *tmp;
listp_t *curr;

if (head != NULL)
{
curr = *head;
while ((tmp = curr) != NULL)
{
curr = curr->next;
free(tmp);
}
*head = NULL;
}
}
