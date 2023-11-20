#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list.
 * @h: a pointer, the head node that links to the 1st node.
 *
 * Return: the number of nodes in the singly linked list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int count = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
