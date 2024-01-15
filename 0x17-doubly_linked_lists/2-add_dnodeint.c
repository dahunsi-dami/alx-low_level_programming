#include "lists.h"
/**
 * add_dnodeint - adds new node at start of dlistint_t list.
 * @head: pointer to pointer which is head of node.
 * @n: the integer to be in the new node.
 * Return: address of new element, else NULL if fail.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *temp;

	current = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (NULL);
	temp = *head;
	current->n = n;
	current->next = temp;
	*head = current;

	return (current);
}
