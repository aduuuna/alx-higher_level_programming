#ifndef LIST_H
#define List_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: shows the next node
 *
 * Description: Singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(list_t **head,const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LIST_H */
