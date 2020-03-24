#include "lists.h"
/**
 * listint_len - return the lenght of a list
 * @h: list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	listint_t *head;

	head = (listint_t *)h;

	while (head != NULL)
	{
		i++;
		head = head->next;
	}
	return (i);
}
