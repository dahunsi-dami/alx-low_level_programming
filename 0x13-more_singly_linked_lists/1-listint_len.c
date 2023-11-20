#include "lists.h"
/**
 * listint_len - returns number of elements in listint_t list.
 * @h: a pointer, the head node that links to the 1st node.
 *
 * Return: the number of nodes in the singly linked list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int count = 0;

	temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
