#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t linked list.
 * @head: the head of the doubly linked list.
 * @index: the zero-indexed number of the node to be returned.
 * Return: nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0, j = 0;

	while (head->next != NULL)
	{
		i++;
		head = head->next;
	}

	if (index < i)
	{
		while (j != index)
		{
			temp = temp->next;
			j++;
		}
	}

	return (temp);
}
