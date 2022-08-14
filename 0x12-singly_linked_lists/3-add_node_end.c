#include "lists.h"

/* prototype */
unsigned int str_len(const char *str);

/**
 * add_node_end - inserts a new node at the end of a list_t
 * @head: pointer to a previous node
 * @str: name of new node
 *
 * Return: address of new element, on fail (NULL)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *address;
 
	address = *head;	/* address tracks previous node */;

	if (head == NULL && str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = str_len(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		address = *head; /* copies address of previous node from head */
		while (address->next != NULL)
			address = address->next;
		address->next = new_node;
	}
	/* free(new_node->str);*/
	/*free(new_node);*/
	return (*head);
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
