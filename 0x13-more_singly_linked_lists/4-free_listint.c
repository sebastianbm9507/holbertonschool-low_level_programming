#include "lists.h"
/**
 * free_listint - freed a list
 * @head: pointer to first element
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	/** pointer next to head */
	listint_t *nextHead;

	while (head)
	{
		nextHead = head->next;
		free(head);
		head = nextHead;
	}
}
