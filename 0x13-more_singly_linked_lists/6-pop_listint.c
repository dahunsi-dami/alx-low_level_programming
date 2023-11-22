#include "lists.h"
/**
 * pop_listint2 - deletes the head node of a listint_t list.
 * @head: a pointer to the head node pointer.
 *
 * Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);

	temp = *head;
	i = temp->n;
	*head = (*head)->next;

	free(temp);

	return (i);
}
