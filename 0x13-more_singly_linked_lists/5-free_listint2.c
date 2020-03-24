#include "lists.h"
/**
 * free_listint2 - freed a list
 * @head: head of list
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *head2, *backup;

	head2 = *head;
	if (!head2)
		return;
	while (head2)
	{
		backup = head2->next;
		free(head2);
		head2 = backup;
	}
	*head = NULL;
}
