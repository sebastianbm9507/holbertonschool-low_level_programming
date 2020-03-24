#include "lists.h"

/**
 * sum_listint - sum the n value of a list
 * @head: head of the list
 * Return: result of addition
 */
int sum_listint(listint_t *head)
{
	int result = 0;

	if (!head)
		return (0);

	while (head)
	{
		result = result + head->n;
		head = head->next;
	}
	return (result);
}
