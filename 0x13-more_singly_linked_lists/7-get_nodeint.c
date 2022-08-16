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
	unsigned int count = 0;

	/* check if head node is valide */
	if (head == NULL)
		return (NULL);

	else
	{
		while (count < index)
		{
			head = head->next;
			count++;

			if (head->next == NULL && count < index)
				return (NULL);

		}
		return (head);
	}
}
