#include "lists.h"

/**
 * list_len - prints the number of nodes
 * @h: pointer to node
 *
 * Return: number of nodes(elements), on error (-1)
 */

size_t list_len(const list_t *h)
{
	size_t count_node;

	if (h != NULL)
		return (-1);

	while (h != NULL)
	{
		count_node++;
		h = h->next; /* move to the next node */
	}
	return (count_node);
}
