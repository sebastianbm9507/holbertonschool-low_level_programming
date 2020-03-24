#include "lists.h"

/**
 * pop_listint - delete the head node of a list
 * @head: head of the list
 * Return: data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *nextoHead;
	int value;
	/** checking list empty */
	if (!*head)
	{
		/** means head is pointing to nothing */
		return (0);
	}
	/** set backup to what head points to */
	nextoHead = (*(*head)).next;
	value = (*(*head)).n;
	/** change head to next node */
	free(*head);
	*head = nextoHead;
	return (value);
}
