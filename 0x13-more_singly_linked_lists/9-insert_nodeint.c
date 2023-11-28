#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts new node at given position.
 * @head: a pointer to the head node pointer.
 * @idx: 0 indexed and index of list where new node should be added.
 * @n: the data to be in the new node.
 *
 * Return: address of new node, else 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newnode;
	listint_t *backnode;
	listint_t *nextnode = *head;

	while (nextnode)
	{
		if (i == idx)
		{
			newnode = malloc(sizeof(listint_t));
			if (newnode == NULL)
				return (NULL);

			newnode->n = n;
			newnode->next = nextnode;
			backnode->next = newnode;

			return (newnode);
		}

		backnode = nextnode;
		nextnode = nextnode->next;
		i++;
	}

	return (NULL);
}
