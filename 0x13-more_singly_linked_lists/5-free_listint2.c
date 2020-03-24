#include "lists.h"
/**
 * free_listint2 - freed a list
 * @head: head of list
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *h, *backup;

	h = *head;
	if (!h)
		return;
	while (h)
	{
		backup = h;
		h = h->next;
		free(backup);
	}
	*head = NULL;
}
