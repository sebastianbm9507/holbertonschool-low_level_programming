#include "lists.h"

/**
 * add_node - adding a new node
 * @head: head of the node
 * @str: string to be copy
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	/**open the memory for new node */
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	/** copy the string */
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = *head;
	*head = newNode;
return (newNode);
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

