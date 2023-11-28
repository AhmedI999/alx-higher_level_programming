#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

/**
 * struct listint_s - is a singly linked list
 * @n: is an integer
 * @next: points to the next node in the single linked list
 * Description: linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif
