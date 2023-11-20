#include "lists.h"
/**
 * add_nodeint - adds new node at start of listint_t list.
 * @head: a pointer to point-- to the head node pointer.
 * @n: the value n to be inserted in the new node.
 *
 * Return: the number of nodes in the singly linked list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
