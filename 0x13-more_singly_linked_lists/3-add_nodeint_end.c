#include "lists.h"

/**
 * add_nodeint_end - append a linked list with a node
 * @head: pointer to the head of a node
 * @n: value of a node
 *
 * Return: address of the new element, NULL (on failure)
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* create pointer for new node and temporary node */
	listint_t *new_node, *temp_node;

	
	/* allocate memory to new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node; /*connecting head to the first node */
	}

	else
	{
		temp_node = *head; /* copy pointer location of head */
		/* find the last node starting from the head */
		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next; /*move to the next node */
		}
		/*link previous node to new node */
		temp_node->next = new_node;
	}
	return (new_node);
}
