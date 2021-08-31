#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct is_or_not_s - Struct to carry the return of function.
 *        @is         :   1 if the given linked list is palindrome
 *                       -1 if not.
 */
typedef struct is_or_not_s
{
	int is;
} is_or_not_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

int is_palindrome(listint_t **head);
int palindrome(listint_t *current, listint_t *head, int is);

#endif /* LISTS_H */
