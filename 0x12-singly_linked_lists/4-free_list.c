#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: pointer to head of the node.
 *
 * Return: unnecessary as function returns void.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
