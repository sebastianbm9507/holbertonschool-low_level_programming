#include "lists.h"
/**
 * add_dnodeint - add node at the beginning of a list
 * @head: pointer to first element of the list
 * @n: n value to the new node
 * Return: Adress of new node - On succes, NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/** pointer to new node 🥎*/
	dlistint_t *new;
	dlistint_t *next_node = *head;
	/** creating space 🎱*/
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	/** given data to new node 🥊 */
	new->n = n;
	/** new node points to node ahead 🦴*/
	new->next = *head;
	/** new node prev point to null 🍟*/
	new->prev = NULL;
	/** head points to new node 🥤 */
	*head = new;
	/** return the address of new node 🍭*/
	return (new);
}
