#include "lists.h"
/**
 * _strlen - counts length of a string excluding null byte.
 * @str: the string whose length is to be counted.
 *
 * Return: the length of the string.
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * add_node_end - adds new node at end of a list_t list.
 * @head: pointer to head of the node.
 * @str: the string to be stored in the new node added.
 *
 * Return: the address of the new element, NULL if fail.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *strg;
	unsigned int length;
	list_t *newnode, *temp;

	newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	strg = strdup(str);

	if (strg == NULL)
	{
		free(newnode);
		return (NULL);
	}

	length = _strlen(strg);

	newnode->str = strg;
	newnode->len = length;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}

	return (newnode);
}
