#include "lists.h"
/**
 * add_dnodeint_end - adds new node at end of dlistint_t list.
 * @head: pointer to pointer, which is head of list.
 * @n: integer to be stored in new node.
 * Return: address of new element, else NULL if fail.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	temp = *head;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	
	newnode->n = n;
	newnode->next = NULL;

	if ((*head) == NULL)
	{
		newnode->prev = NULL;
		(*head) = newnode;
		return (newnode);
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
	
		temp->next = newnode;
		newnode->prev = temp;
	}

	return (newnode);
}
