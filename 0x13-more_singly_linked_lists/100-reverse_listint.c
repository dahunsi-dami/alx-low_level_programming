#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list.
 * @head: a pointer to the head node pointer.
 *
 * Return: pointer to first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *backnode = NULL, *nextnode = *head;

	while (*head && (*head = (*head)->next))
	{
		nextnode->next = backnode;
		backnode = nextnode;
		nextnode = *head;
	}
	if (!(*head) && backnode)
	{
		nextnode->next = backnode;
	}
	*head = nextnode;

	return (*head);
}
