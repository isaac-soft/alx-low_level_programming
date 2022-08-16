#include "lists.h"

/**
 * add_nodeint -add node at the beginning of a linked list
 * @head: points to the head of a node
 * @n: pointer the node value
 *
 * Return: address of the new element, NULL (on failure)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* creates pointer for every node added */

	if (head == NULL)
		return (NULL);

	/* creating memory for new node */
	new_node = malloc(sizeof(listint_t));
	/* check if memory has been created */
	if (new_node == NULL)
		return (NULL);

	/*code to acess, add and arrange node */
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	
	return (new_node);
}
