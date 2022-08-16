#include "lists.h"

/**
 * free_listint2 - frees a a linked list of type listint_t
 * @head: double pointer to head
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (*head == NULL)
		return;

	else
	{
		while (*head != NULL)
		{
			temp_node = (*head)->next;
			free(*head);
			*head = temp_node;
		}
		free(temp_node);
	}
	*head = NULL;
}
