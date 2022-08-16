#ifndef _LISTS_H_ /* include guarded */
#define _LISTS_H_

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

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif /* _LISTS_H_ */
