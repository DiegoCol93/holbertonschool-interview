#include "list.h"
/**
 * add_node_end - Adds a new node to the end of a circular double linked list.
 *
 *    @list:   ─┤ List:   Double pointer to the Head of the linked list.
 *     @str:   ─┤ char[]: String to save on the new node.
 *
 *    Return:  ─┤ pointer: Address of the new node, NULL on failure.
 */
List *add_node_end(List **list, char *str)
{
	List *start = NULL, *end = NULL, *observer = NULL, new_node;

	if (*list == NULL)
	{
		new_node.next = &new_node;
		new_node.prev = &new_node;
		new_node.str = str;
		*list = &new_node;
		return (*list);
	}

	start = observer = *list;

	if (observer->next != observer->prev)
	{
		printf("HELLO");
	}



	if (start->prev == NULL)
		return (NULL);

	while (observer != start)
		printf("%s", observer->str);

	printf("%s", str);
	return (NULL);
}

/**
 * add_node_begin - Adds a new node to the beginning of a circular double
 *                  linked list.
 *
 *     @list:    ─┤ List:   Double pointer to the Head of the linked list.
 *      @str:    ─┤ char[]: String to save on the new node.
 *
 *     Return:   ─┤ pointer: Address of the new node, NULL on failure.
 */
List *add_node_begin(List **list, char *str)
{
	List *start = NULL, *end = NULL, *observer = NULL;

	if (*list == NULL)
		return (NULL);

	start = end = observer = *list;

	if (start->next == NULL)
		return (NULL);

	while (observer != start)
		printf("%s", observer->str);

	printf("%s", str);
	return (NULL);
}
