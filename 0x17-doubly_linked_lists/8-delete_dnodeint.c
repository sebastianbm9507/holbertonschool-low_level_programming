#include "lists.h"
dlistint_t *find_last(dlistint_t *head);
size_t dlistint_len2(const dlistint_t *h);
/**
 * delete_dnodeint_at_index - Deletes a node at given index
 * @head: pointet to first element of list
 * @index: index of element to be deleted
 * Return: 1 on succes, -1 on  failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/** pointer to not move the head */
	dlistint_t *guide_ptr;
	/** auxiliar pointer */
	dlistint_t *auxiliar_ptr;
	/** pointer to node to be deleted */
	dlistint_t *to_delete;
	/** index to be compared */
	unsigned int idx_2;
	/** variable to store the len of the list */
	size_t len = dlistint_len2(*head);

	if (head == NULL || *head == NULL || index > len)
		return (-1);

	guide_ptr = *head;
	if (!guide_ptr)
	{
		return (-1);
	}
	/** case is the first element to be deleted */
	if (index == 0 && len != 1)
	{
		guide_ptr = (*head)->next;
		free(*head);
		*head = guide_ptr;
		(*head)->prev = NULL;
		return (1);
	}
	/** Case node to be deleted is the last node of list */
	if (len == index)
	{
		to_delete = find_last(*head);
		to_delete->next = NULL;
		to_delete->prev = NULL;
		return (1);
	}
	while (guide_ptr)
	{
		if (idx_2 == (index - 1))
		{
			to_delete = guide_ptr->next;
			auxiliar_ptr = guide_ptr->next->next;
			guide_ptr->next = auxiliar_ptr;
			auxiliar_ptr->prev = guide_ptr;
			/**🆓🆓🆓🆓🆓 MAGIC HAPPENS HERE 🆓🆓🆓🆓🆓 */
			free(to_delete);
			/** 🆓🆓🆓🆓🆓 MAGIC HAPPENS HERE 🆓🆓🆓🆓🆓*/
			return (1);
		}
		guide_ptr = guide_ptr->next;
		idx_2++;
	}
	return (-1);
}
/**
 * dlistint_len2 - Found the number of elements
 * @h: pointer to first node
 * Return: number of elements founded
 */
size_t dlistint_len2(const dlistint_t *h)
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
/**
 * find_last - Find the last node in the list
 * @head: pointer to first node
 * Return: pointer to the las element of list
 */
dlistint_t *find_last(dlistint_t *head)
{
	while (head->next)
	{
		head = head->next;
	}
	return (head);
}
