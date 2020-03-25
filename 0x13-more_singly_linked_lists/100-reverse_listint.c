#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: first pointer of list
 * Return: pointer to list reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *before;
	/** check  head or *head */
	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	before = NULL;
	/** going through list */
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = next;
	}
	*head = before;
	return (*head);
}
