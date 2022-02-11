#include "list.h"
/**
 * add_node_end - Adds a new node to the end of a circular double linked list.
 *
 *	  @list:   ─┤ List:	  Double pointer to the Head of the linked list.
 *	   @str:   ─┤ char[]: String to save on the new node.
 *
 *	  Return:  ─┤ pointer: Address of the new node, NULL on failure.
 */
List *add_node_end(List **list, char *str)
{
	List *new_node = NULL;

	new_node = malloc(sizeof(List));

	if (!new_node)
		return (NULL);

	new_node->next = new_node;
	new_node->prev = new_node;
	new_node->str = str;

	if (*list == NULL)
	{
		*list = new_node;
		return (new_node);
	}

	new_node->prev = (*list)->prev;
	new_node->next = *list;
	(*list)->prev->next = new_node;
	(*list)->prev = new_node;
	return (new_node);
}

/**
 * add_node_begin - Adds a new node to the beginning of a circular double
 *					linked list.
 *
 *	   @list:	 ─┤ List:	Double pointer to the Head of the linked list.
 *		@str:	 ─┤ char[]: String to save on the new node.
 *
 *	   Return:	 ─┤ pointer: Address of the new node, NULL on failure.
 */
List *add_node_begin(List **list, char *str)
{
	List *new_node = NULL;

	new_node = malloc(sizeof(List));

	if (!new_node)
		return (NULL);

	new_node->next = new_node;
	new_node->prev = new_node;
	new_node->str = str;

	if (*list == NULL)
	{
		*list = new_node;
		return (new_node);
	}

	new_node->prev = (*list)->prev;
	new_node->next = *list;
	(*list)->prev->next = new_node;
	(*list)->prev = new_node;
	*list = new_node;
	return (*list);
}
