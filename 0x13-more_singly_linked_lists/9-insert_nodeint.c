#include "lists.h"
unsigned int listint_len2(listint_t *h);
/**
 * insert_nodeint_at_index - inserting a node in a index
 * @head: head of list
 * @idx: index to insert the new node
 * @n: value to be inserted in new node field
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/** declaring variables */
	unsigned int tamanio;
	listint_t *centinela;
	listint_t *newNode;
	unsigned int index2;
	/** set variables */
	centinela = NULL;
	newNode = NULL;
	index2 = 0;
	centinela = *head;
	/**----------------*/
	if (!*head || head == NULL)
		return (NULL);
	/**-----get lenght of list------*/
	tamanio = listint_len2((*head));
	/** asigning memory space */
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	/**-----checkinf if idx is greater than list-----*/
	if (idx > tamanio)
		return (NULL);
	/**-----checking when idx = 0 -----*/
	if (idx == 0)
	{
		newNode->next = *head;
		newNode->n = n;
		*head = newNode;
		return (newNode);
	}
	/** -----locating the node before the new node---- */
	while (index2 < (idx - 1))
	{
		index2++;
		centinela = centinela->next;
	}
	/** giving values to new node */
	newNode->n = n;
	/** ataching new node with the next to current */
	newNode->next = centinela->next;
	/** ataching current node to newNode */
	centinela->next = newNode;
	return (newNode);
}
/**
 * listint_len2 - return the lenght of a list
 * @h: list
 *
 * Return: number of elements in the list
 */
unsigned int listint_len2(listint_t *h)
{
	unsigned int i;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
