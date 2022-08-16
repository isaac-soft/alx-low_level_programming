#include "lists.h"
/**
  * delete_nodeint_at_index - delete node at index of a list
  * @head: list
  * @index: index to delete the node
  * Return: 1 if succeeded, 2 if failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *next, *temp_node;

	if (*head == NULL)
	{
		return (-1);
	}

	temp_node = *head;

	if (index == 0)
	{
		*head = temp_node->next;
		free(temp_node);
		return (1);
	}

	for (x = 0; temp_node != NULL && x < (index - 1); x++)
		temp_node = temp_node->next;

	if (!temp_node || temp_node->next == NULL)
		return (-1);

	next = temp_node->next->next;
	free(temp_node->next);
	temp_node->next = next;

	return (1);
}
