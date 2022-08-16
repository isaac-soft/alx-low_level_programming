#include "lists.h"

/**
 * free_listint - frees a linked list of type listint_t
 * @head: pointer to link
 * 
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node; /*this node tracks the value of head */

	if (head == NULL)
		free(head);

	else
	{
		/*loop through memory location */
		while (head != NULL)
		{
			temp_node = head; /*copy pointer location */
			head=head->next; /*move to next node */
			free(temp_node); /*free current locatin */
		}
		free(head);
	}
}


