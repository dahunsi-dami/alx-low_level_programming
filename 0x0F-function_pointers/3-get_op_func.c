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
	int i;

	for (i = 0; i < 5; i++)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
	}

	return (NULL);
}