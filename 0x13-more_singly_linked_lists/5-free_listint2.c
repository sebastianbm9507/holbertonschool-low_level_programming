#include "lists.h"
/**
 * free_listint2 - freed a list
 * @head: head of list
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *backup;

	if (!head)
	{
		return;
	}
	/**-------------*/
	while (*head)
	{
		backup = *head;
		*head = (*head)->next;
		free(backup);
	}
	*head = NULL;
}
