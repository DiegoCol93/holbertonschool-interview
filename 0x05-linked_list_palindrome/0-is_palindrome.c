#include "lists.h"
/**
 * is_palindrome - Determines if a linked lis is a palindrome
 *    @head:     - Pointer to the beggining of the singly linked list
 *    Return:    - 1 if list is palindrome 0 if not.
 */
int is_palindrome(listint_t **head)
{
	int *array = NULL, size = 0, i = 0;
	listint_t *current = NULL;

	current = *head;

	if (current)
	{
		while (current)
		{
			size += 1;
			current = current->next;
		}
		array = malloc(sizeof(int) * size);
		size = 0;
		current = *head;
		while (current)
		{
			array[size] = current->n;
			size += 1;
			current = current->next;
		}

		for (i = 0; i < size; i++)
			if (array[i] != array[size - 1 - i])
				return (-1);

		return (1);
	}
	return (-1);
}
