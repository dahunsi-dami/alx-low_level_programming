#include "lists.h"
/**
 * print_list - prints all elements of list_t list.
 * @h: pointer to the head of the linked list.
 *
 * Return: the number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int count = 0;

	temp = (list_t *)malloc(sizeof(list_t));

	temp = h;

	while (temp != 0)
	{
		if (temp->str == 0)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			count++;
			continue;
		}
		printf("[%i] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}

	return (count);
}
