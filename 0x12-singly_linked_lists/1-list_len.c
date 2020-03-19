#include "lists.h"

/**
 * list_len - count the num of elements in the list
 * @h: list_t argument -> list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	/** nodesnum to store the number of nodes/elements */
	int nodesnum = 0;
	/** iterate through h */
	while (h != NULL)
	{
		/** if there is node nodesnum++*/
		nodesnum++;
		/** move to next node */
		h = h->next;
	}
	/** return num of nodes */
	return (nodesnum);
}
