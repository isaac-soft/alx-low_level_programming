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

	/* loop through the node */
	for (x = 0; x <= index; x++)
	{
		/* this checks for the validity of the head */
		/* it also takes care of node that does not exist */
		if (head == NULL)
			return (NULL);


		if (x != index)
		{
			head = head->next; /* move to next node */
		}
	}
	return (head);
}
