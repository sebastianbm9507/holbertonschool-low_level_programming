#include "lists.h"

/**
 * add_nodeint - Add a node at the beggining of a list
 * @head: list
 * @n: element to be inserted (int)
 * Return: new node created
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
return (new);
}
