#include "lists.h"
/**
 * dlistint_len - returns number of elements in dlistint_t linked list.
 * @h: pointer to the head of the doubly linked list.
 *
 * Return: number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t i = 0;

	while (current)
	{
		current = current->next;
		i++;
	}

	return (i);
}
