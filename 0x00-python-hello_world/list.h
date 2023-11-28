#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer data of the node
 * @next: points to the next node in the list
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;                  /* Integer data of the node */
    struct listint_s *next; /* Points to the next node in the list */
} listint_t;

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer to the head of the list
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h);

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Pointer to the head of the list
 * @n: Integer value to be added to the new node
 * Return: Address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head of the list
 */
void free_listint(listint_t *head);

/**
 * check_cycle - Checks if a linked list has a cycle
 * @list: Pointer to the head of the list
 * Return: 1 if there is a cycle, 0 otherwise
 */
int check_cycle(listint_t *list);

#endif /* LISTS_H */
