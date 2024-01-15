#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t linked list.
 * @head: the head of the doubly linked list.
 * @index: the zero-indexed number of the node to be returned.
 * Return: nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head, *tmp = head;
	unsigned int i = 0;

	while (i != index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
