#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to a node.
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);

}
