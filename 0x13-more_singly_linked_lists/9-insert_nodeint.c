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
	/*(void)temp_node; handling unused variable case */

	if (*head == NULL)
	{
		return (NULL);
}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n; /* give new_node its data */

	if (idx == 0)
	{
		new_node->next = *head;	/*copy head data to temporary */
		*head = new_node; /* the new_node is prepended and now the head */
		return (new_node);
	}

	else
	{
		/*copy head data to temporary */
		temp_node = *head;
		/* move head to index position */
		for (counter = 0; counter < (idx - 1); counter++)
		{
			if (temp_node == NULL)
			{
				free(temp_node);
				return (NULL);
			}
			temp_node = temp_node->next;
		}
		/* linke new node to next node */
		new_node->next = temp_node->next; /* linke new node to next node */
		/* link previously linked node to new node*/
		temp_node->next = new_node; /* link previously linked node to new node*/
		/* free(temp_node);*/
		return (new_node);
	}
}
