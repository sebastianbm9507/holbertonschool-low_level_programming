#include "lists.h"

/**
 * dlistint_len - Found the number of elements
 * @h: pointer to first node
 * Return: number of elements founded
 */
size_t dlistint_len(const dlistint_t *h)
{
	/** Variable to store the number of nodes 🟠 */
	size_t num_nodes  = 0;
	/* iterate through list 🟣*/
	while (h)
	{
		h = h->next;
		num_nodes++;
	}
	/* return number of nodes ♥ ⚽️*/
	return (num_nodes);
}
