#include "lists.h"

/**
 * add_nodeint_end - adding a node at the end
 * @head: the head of the list
 * @n: value to be inserted
 * Return: pointer of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/** pointer to get the end */
	listint_t *end = NULL;
	/** definig the new end null */
	listint_t *newend;
	/** end points where head points */
	end = *head;
	/** reserving memory for the new node */
	newend = malloc(sizeof(listint_t));
	if (!newend)
	{
		return (NULL);
	}
	/** in case is the first called of the function and head is pointing to null*/
	if (!*head)
	{
		*head = newend;
		newend->n = n;
		newend->next = NULL;
		return (newend);
	}
	/** finding the null moving end pointer*/
	while (end->next)
	{
		/** if execute this means that is not the last node and continue moving */
		end = end->next;
	}
	/** last node found and make it point to the newend*/
	end->next = newend;
	/** give values to the newwnd node*/
	newend->n = n;
	newend->next = NULL;
	return (newend);
}
