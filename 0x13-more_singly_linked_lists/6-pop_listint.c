#include "lists.h"

/**
 * pop_listint - pops the head node
 * @head: pointer to the head node of a linked list
 *
 * Return: head node's data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node; /* temporary node*/
	int head_data; /* data of head node after popping */

	(void)head_data; /* handling unused variable */
	(void)temp_node;

	/* chck if the head node is valid */
	if (*head == NULL)
		return (0);

	else
	{
		temp_node = *head; /* copy pointer value of head */
		head_data = (*head)->n; /*copy data of the next head node */
		*head = (*head)->next;
		free(temp_node); /*deletes head node */
		return (head_data);
	}
}
