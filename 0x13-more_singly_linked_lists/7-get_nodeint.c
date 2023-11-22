#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of a listint_t linked list.
 * @head: the head node pointer.
 * @index: index of the node, starting at 0.
 *
 * Return: nth node of a linked list, else NULL if.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}
