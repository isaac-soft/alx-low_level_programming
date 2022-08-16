#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head node.
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);

}
