#include "lists.h"

/**
 * delete_nodeint_at_index -
 * @head: head of list
 * Return: 1 if succeed , -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/**-------Variables-------*/
	unsigned int i;
	listint_t *head2 = *head;
	listint_t *delete_node = NULL;
	/** checking if head NULL */
	if (head == NULL)
		return (-1);
	/** in case is the first node to delete */
	if (index == 0 && *head != NULL)
	{
		*head = head2->next;
		free(head2);
		return (1);
	}
	/** going through array */
	for (i = 0; i < index && head2 != NULL; i++)
	{
		/** check if i is before index */
		if (i + 1 == index)
		{
			delete_node = head2->next;
			head2->next = delete_node->next;
			free(delete_node);
			break;
		}
		else
			head2 = head2->next;
	}
	if (head2 == NULL)
		return (-1);
	return (1);
}