#include "lists.h"

/**
 * free_dlistint - Free memory of list 🆓
 * @head: pointer to first element of list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *guide;

	while (head)
	{
		guide = head->next;
		free(head);
		head = guide;
	}
}
