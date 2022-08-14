#include "lists.h"

/* prototype */
unsigned int str_len(const char *str);

/**
 * add_node - inserts a new node at the beginning of a list_t
 * @head: pointer to a previous node
 * @str: name of new node
 *
 * Return: address of new element, on fail (NULL)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len(str);
	new_node->next = *head;
	*head = new_node;
	/* free(new_node->str);*/
	/*free(new_node);*/
	return (new_node);
}

/**
 * str_len - counts string length
 * @str: pointer to string
 * Return: sting length
 */

unsigned int str_len(const char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
