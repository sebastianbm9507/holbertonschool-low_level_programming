#include "lists.h"

/**
 * get_nodeint_at_index - get a node at index
 * @head: head of the list
 * @index: position to be find
 * Return: pointer to new node found it
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int index2 = 0;
	listint_t *found;
	/** if head is null */
	if (!head)
		return (NULL);
	/** going trought nodes */
	while (head)
	{
		if (index == index2)
		{
			found = head;
			break;
		}
		else
		{
			head = head->next;
			index2++;
		}
	}
	if (index > index2)
	return (NULL);
return (found);
}
