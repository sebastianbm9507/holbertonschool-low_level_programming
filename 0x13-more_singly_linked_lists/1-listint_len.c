#include "lists.h"

/**
 * listint_len - return the lenght of a list
 * @h: list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
