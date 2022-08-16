#ifndef _LISTS_H_ /* include guarded */
#define _LISTS_H_

/* libraries */
#include <stdio.h>
#include <stdlib.h>


/**
 * struct listint_s -singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */

/* alias for a struct function of node format */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* list of prototypes */
int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

#endif /* _LISTS_H_ */
