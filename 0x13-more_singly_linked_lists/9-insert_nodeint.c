#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a specified index
 * @head: pointer to a linked list
 * @idx: index for new node
 * @n: data of newnode
 *
 * Return: address of new node, NULL (FAIL)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter;
	listint_t *temp_node, *new_node;

	/* copy pointer location of head */
	temp_node = *head;
	/* move head to index position */
	for (counter = 0; counter < (idx - 1); counter++)
	{
		temp_node = temp_node->next;
		if (temp_node == NULL)
		{
			free(temp_node);
			return (NULL);
		}
	}

	/* allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	new_node->n = n; /* give new_node its data */
	new_node->next = temp_node->next; /* linke new node to next node */
	temp_node->next = new_node; /* link previously linked node to new node*/
	/* free(temp_node);*/
	return (new_node);
}
