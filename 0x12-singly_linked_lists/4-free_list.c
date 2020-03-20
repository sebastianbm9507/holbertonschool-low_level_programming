#include "lists.h"

/**
 * free_list - free memory for all list
 * @head: head of my list
 * Return:  void
 */
void free_list(list_t *head)
{
	list_t *forward;

	while (head != NULL)
	{
		forward = head->next;
		free(head->str);
		free(head);
		head = forward;
	}
}
