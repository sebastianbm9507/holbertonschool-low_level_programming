#include "lists.h"

/**
 * sum_dlistint -Sum all the (n) value on each node
 * @head: pointer to first element of list
 * Return: result of all add.
 */
int sum_dlistint(dlistint_t *head)
{
	/** Variable to store the sum result 💈*/
	int result;
	/** Pointer to not move head 🗡*/
	dlistint_t *guide = head;
	/** means = no list ❌*/
	if (!head)
		result = 0;
	/** exist a list ✅*/
	else
	{
		/** move into the list to sum Ⓜ️ */
		while (guide)
		{
			result = result + guide->n;
			guide = guide->next;
		}
	}
	/** Return the result of sum 🔰*/
	return (result);
}