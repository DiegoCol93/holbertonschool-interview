#include "lists.h"
/**
 * is_palindrome - Determines if a linked lis is a palindrome
 *    @head:     - Pointer to the beggining of the singly linked list
 *    Return:    - 1 if list is palindrome 0 if not.
 */
int is_palindrome(listint_t **head)
{
	int *array = NULL, size = 0;
	listint_t *current = NULL;

	current = *head;

	if (current)
	{
		while (current)
		{
			size += 1;
			current = current->next;
		}
	}
	array = malloc(sizeof(int) * size);
	printf("%d", size);
	return (1);
}
