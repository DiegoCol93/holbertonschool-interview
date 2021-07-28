#include "lists.h"

/**
 * insert_node - Inserts a node on an ordered int singly linked list.
 *
 *    Args:
 *    @head: ──── Pointer to the beggining of the linked list.
 *   @number: ─── Number for the new node to insert.
 *
 *   Return: ──┬── ✅ *listint pointer to the new node inserted or
 *             └── ❌ NULL if it fails.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node = NULL, *current = NULL;

	if (head == NULL)
			return (NULL);

	current = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = number;

	if (current != NULL)
	{
		if (number < current->n)
		{
			/* Set node at the beggining. */
			new_node->next = current;
			*head = new_node;
			return (new_node);
		}

		while (current->next != NULL)
		{
			if (number < current->next->n)
			{
				/* Set node at the middle. */
				new_node->next = current->next;
				current->next = new_node;
				return (new_node);
			}
			current = current->next;
		}

		/* Set node at the end. */
		new_node->next = NULL;
		current->next = new_node;
		return (new_node);
	}
	new_node->next = NULL;
	*head = new_node;

	return (new_node);
}
