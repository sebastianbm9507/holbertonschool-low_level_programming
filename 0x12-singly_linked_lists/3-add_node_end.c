#include "lists.h"
/**
 * add_node_end - Adding a node at the end
 * @str: char pointer argument
 * @head: head of my list
 * Return: the end node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NewNode;
	list_t *temporal = *head;

	NewNode = malloc(sizeof(list_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->str = strdup(str);
	NewNode->len = _strlen(str);
	NewNode->next = NULL;

	if (*head == NULL)
	{
		*head = NewNode;
		return (NewNode);
	}
	while (temporal->next !=  NULL)
		temporal = temporal->next;
	temporal->next = NewNode;
return (NewNode);
}
/**
 * _strlen - swap a value
 * @s: pointer parameter
 * Return: Always 0 (Success)
 */
int _strlen(const char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
