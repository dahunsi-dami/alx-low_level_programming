#include "lists.h"
/**
 * sum_listint - returns sum of data(n) of a listint_t linked list.
 * @head: the head node pointer.
 *
 * Return: sum of data(n) of a linked list, else 0 if empty.
 */
int sum_listint(listint_t *head)
{
	int addition = 0;

	while (head != NULL)
	{
		addition += head->n;
		head = head->next;
	}

	return (addition);
}
