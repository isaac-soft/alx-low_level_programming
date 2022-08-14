#include "lists.h"

/**
 * print_list - prints the elements in a node
 * @h: points to a node
 * list_t -struct type
 * Return: number of node, on error (-1)
 *
 * Description: This funciton prints the nodes in a singly linked lists
 */

size_t print_list(const list_t *h)
{
	size_t count_node = 0;

	/* check if the node is empty */
	if (h == NULL)
		return (-1);

	/* iterate through the elements of a node */
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next; /* move to the next node */
		count_node++; /* count node */
	}
	return (count_node);
}
