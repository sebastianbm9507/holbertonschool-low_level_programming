#include "lists.h"
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint_end2(dlistint_t **head, const int n);
dlistint_t *add_dnodeint2(dlistint_t **head, const int n);
/**
 * insert_dnodeint_at_index - Insert node at given idx
 * @h: head to the first element of list
 * @idx: index where new node is goint to be
 * @n: (n) value to be assigned to new node
 * Return: Adress of new node On succes , NULL On failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/** new node to be inserted 🔰*/
	dlistint_t *new_node;
	/** pointer to not move head ✅*/
	dlistint_t *guide_ptr;
	/** auxiliar pointer 🚺*/
	dlistint_t *current_node;
	/** index to compare with idx 🅿️*/
	unsigned int idx_2 = 0;
	/** Lenght of list */
	size_t len = dlistint_len(*h);

	/** create memory for new node 🆗*/
	new_node = malloc(sizeof(dlistint_t));
	if (idx > len || new_node == NULL || h == NULL)
		return (NULL);
	/** case to insert node at first position 0️⃣ */
	if (idx == 0)
	{
		/** call the function add_nodeint2 🤙🏼 */
		new_node = add_dnodeint2(h, n);
		return (new_node);
	}
	/** case to insert node at end position of list ⛔️*/
	if (idx == len)
	{
		new_node = add_dnodeint_end2(h, n);
		return (new_node);
	}
	/** assing to guide_ptr the first element of list */
	guide_ptr = *h;
	if (guide_ptr == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	/** iterate into list of nodes 🅰️*/
	while (guide_ptr != NULL)
	{
		/** Found it ✅*/
		if (idx_2 == (idx - 1))
		{
			/** makes all the assignment to new node elements ✅*/
			current_node = guide_ptr;
			guide_ptr =  guide_ptr->next;
			new_node->next = guide_ptr;
			new_node->prev = current_node;
			new_node->n = n;
			guide_ptr->prev = new_node;
			current_node->next = new_node;
			return (new_node);
		}
		/** case not found it yet ❗️ */
		guide_ptr = guide_ptr->next;
		idx_2++;
	}
	/** case not found it ❗️*/
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
 * add_dnodeint_end2 - Add node at the end
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
/**
 * add_dnodeint2 - add node at the beginning of a list
 * @head: pointer to first element of the list
 * @n: n value to the new node
 * Return: Adress of new node - On succes, NULL on failure
 */
dlistint_t *add_dnodeint2(dlistint_t **head, const int n)
{
	/** pointer to new node 🥎*/
	dlistint_t *new;
	/** creating space 🎱*/
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!*head)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		/** given data to new node 🥊 */
		new->n = n;
		/** new node points to node ahead 🦴*/
		new->next = *head;
		/** new node prev point to null 🍟*/
		new->prev = NULL;
		/** head prev points to new node 🆗 */
		(*head)->prev = new;
		/** head points to new node 🥤 */
		*head = new;
	}
	/** return the address of new node 🍭*/
	return (new);
}
