#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head of list to be freed.
 * Return: unnecessary as function prototype is void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	while (head->next != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}

	free(temp);
}
