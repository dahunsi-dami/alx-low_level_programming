#include "3-calc.h"
/**
 * main - performs simple operations.
 * @argc: number of arguments passed to program.
 * @argv: 1D array of each arg passed as strings.
 *
 * Return: always 0 (success).
 */
int main(int argc, char *argv[])
{
	int (*ops_function)(int, int);
	int r;

	if (argc == 4)
	{
		ops_function = get_op_func(argv[2]);
		if (ops_function == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		r = ops_function(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}
