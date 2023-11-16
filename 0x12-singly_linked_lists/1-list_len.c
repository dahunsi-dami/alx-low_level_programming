#include "lists.h"
/**
 * list_len - returns number of elements in a linked list.
 * @h: pointer to the head of the linked list.
 *
 * Return: the number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int count = 0;

	temp = (list_t *)malloc(sizeof(list_t));

	temp = h;

	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
