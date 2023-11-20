#include "lists.h"
/**
 * add_nodeint_end - adds new node at end of listint_t list.
 * @head: a pointer to the head node pointer.
 * @n: the value n to be inserted in the new node.
 *
 * Return: the number of nodes in the singly linked list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newnode;

	return (newnode);
}
