#include <stdio.h>
#include "main.h"
/**
 * set_string - sets value of a pointer to char.
 * @s: pointer to a pointer containing the value.
 * @to: character where value of pointer will be set to.
 *
 * Return: unnecessary as function prototype is void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
