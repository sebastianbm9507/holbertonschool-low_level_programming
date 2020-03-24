#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @h: listint_t parameter
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
