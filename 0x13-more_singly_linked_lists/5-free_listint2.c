#include "lists.h"
/**
 * free_listint2 - freed a list
 * @head: head of list
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *h, *backup;

	if (!*head)
	{
		head = NULL;
		return;
	}
	if (!(*head)->next)
	{
		free(*head);
		*head = NULL;
		head = NULL;
		return;
	}
	/**-------------*/
	h = *head;
	while (h)
	{
		backup = h;
		h = h->next;
		free(backup);
	}
	*head = NULL;
}
