#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert node at given idx
 * @h: head to the first element of list
 * @idx: index where new node is goint to be
 * @n: (n) value to be assigned to new node
 * Return: Adress of new node On succes , NULL On failure
 */

size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint_end2(dlistint_t **head, const int n);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/** new node to be inserted 🔰*/
	dlistint_t *new_node;
	/** pointer to not move head ✅*/
	dlistint_t *guide_ptr;
	dlistint_t *current_node;
	/** index to compare with idx 🅿️*/
	unsigned int idx_2 = 0;
	/** Lenght of list */
	size_t len = dlistint_len(*h);

	/** create memory for new node 🆗*/
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (idx > len)
		return (NULL);
	if (idx == 0)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	if (idx == len)
	{
		new_node = add_dnodeint_end2(h, n);
		return (new_node);
	}
	/** assing to guide_ptr the first element of list */
	guide_ptr = *h;
	while (guide_ptr != NULL)
	{
		if (idx_2 == (idx -1))
		{
			current_node = guide_ptr;
			guide_ptr =  guide_ptr->next;
			new_node->next = guide_ptr;
			new_node->prev = current_node;
			new_node->n = n;
			guide_ptr->prev = new_node;
			current_node->next = new_node;
			return (new_node);
		}
		guide_ptr = guide_ptr->next;
		idx_2++;
	}
	return (NULL);
}
/**
 * dlistint_len - Found the number of elements
 * @h: pointer to first node
 * Return: number of elements founded
 */
size_t dlistint_len(const dlistint_t *h)
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
 * add_dnodeint_end - Add node at the end
 * @head: pointer to head of the list
 * @n: n value to be assigned to new node
 * Return: address of new node on succes, Null on failure
 */
dlistint_t *add_dnodeint_end2(dlistint_t **head, const int n)
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
