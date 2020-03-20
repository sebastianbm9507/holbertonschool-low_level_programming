#include "lists.h"

/**
 * print_list - Write to stdout the value of list_t
 * @h: list_t argument
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	/** once h-> is == NULL is false*/
	while (h != NULL)
	{
		/** checking if str is null */
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			/** move to next node */
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			/** move to next node */
			h = h->next;
		}
		/** store the number of nodes  */
		counter++;
	}
	return (counter);
}
