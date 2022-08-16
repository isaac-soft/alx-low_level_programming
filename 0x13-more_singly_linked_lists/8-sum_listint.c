#include "lists.h"

/**
 * sum_listint- sum all the data in the nodes
 * @head: pointer to node
 *
 * Return: the sum of nodes value
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	if (head == NULL)
		return (0);

	else
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return(sum);
	}
}
