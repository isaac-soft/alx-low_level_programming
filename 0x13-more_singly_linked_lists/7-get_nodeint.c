#include "lists.h"

/**
 * get_nodeint_at_index - returns node data at specified index
 * @head: points to the head of a linked list
 * @index: locates the position of a node
 *
 * Return: nth node data, NULL (index doesn't exist)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x <= index; x++)
	{
		if (head == NULL)
			return (NULL);
		if (x != index)
		{
			head = head->next;
		}
	}
	return (head);
}
