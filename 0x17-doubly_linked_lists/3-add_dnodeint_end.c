#include "lists.h"

/**
 * add_dnodeint_end - Add node at the end
 * @head: pointer to head of the list
 * @n: n value to be assigned to new node
 * Return: address of new node on succes, Null on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/** pointer to new node 🐶*/
	dlistint_t *new_node;
	/** guide pointer to move till end 🐼*/
	dlistint_t *guide = *head;
	/** creating memory for new node 🐷*/
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	/** in case there's no node yet 🐒*/
	if (!*head)
	{
		*head = new_node;
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}
	/** already exist nodes 🦁 */
	while (guide->next != NULL)
		guide = guide->next;
	/** assign values to new node 🦆*/
	new_node->prev = guide;
	guide->next = new_node;
	new_node->next = NULL;
	new_node->n = n;
	return (new_node);
}
