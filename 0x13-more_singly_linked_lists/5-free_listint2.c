#include "lists.h"
/**
 * free_listint2 - freed a list
 * @head: head of list
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *nextAhead;

	nextAhead = *head;
	while (*head)
	{
		*head = (*head)->next;
		free(nextAhead);
		nextAhead = *head;
	}
	*head = NULL;
}
