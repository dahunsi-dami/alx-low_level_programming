#include "3-calc.h"
/**
 * get_op_func - selects correct func to perform op
 * asked by user.
 * @s: the operation asked by user.
 *
 * Return: pointer to func corresponding to op
 * given by user.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(s + 1) == '\0' && *s == ops[i].op[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
