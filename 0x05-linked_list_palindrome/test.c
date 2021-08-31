#include "lists.h"
/**
 * is_palindrome - Determines if a linked lis is a palindrome
 *    @head:     - Pointer to the beggining of the singly linked list
 *    Return:    - 1 if list is palindrome 0 if not.
 */
int is_palindrome(listint_t **head)
{
	int is = 0;

	if (*head)
	{
		is = palindrome(*head, *head, is);
		printf("%d", is);
		return(is);
	}
	return 1;
}

/**
 * recursive_move - Recursively runs trhough a linked list.
 *     Args:
 *     @head      - Pointer to head of linked list.
 *    Return:     - 1 if given linked list is palindrome, -1 if not.
 */
int palindrome(listint_t *current, listint_t *head, int is)
{
	if (head)
	{
		/* printf("call before - HEAD --->%d\n", head->n); */
		/* printf("call before - CURRENT ---->%d\n", current->n); */
		palindrome(current, head->next, is);
		if (current->n != head->n)
			is = -1;
		else
		{
			current = current->next;
			is = 1;
		}

		printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
		printf("call after - HEAD    ---->%d\n", head->n);
		printf("call after - CURRENT ---->%d\n", current->n);
		printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
	}

	return (is);
}
