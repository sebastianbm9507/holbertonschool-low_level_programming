#include "lists.h"

/**
 * sum_dlistint -Sum all the (n) value on each node
 * @head: pointer to first element of list
 * Return: result of all add.
 */
int sum_dlistint(dlistint_t *head)
{
	/** Variable to store the sum result 💈*/
	int result = 0;
	/** means = no list ❌*/
	if (!head)
		result = 0;
	/** exist a list ✅*/
	/** move into the list to sum Ⓜ️ */
		while (head)
		{
			result = result + head->n;
			head = head->next;
		}
	/** Return the result of sum 🔰*/
	return (result);
}
