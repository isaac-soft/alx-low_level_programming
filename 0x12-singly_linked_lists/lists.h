#ifndef _LIMITS_H_
#define _LIMITS_H_

/**
 * struct list_s -singly linked list
 * @str: string - (malloc'ed sting)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node strucure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif /* _LIMITS_H_ */
