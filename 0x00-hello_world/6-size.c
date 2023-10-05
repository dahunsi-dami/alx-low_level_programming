#include <stdio.h>

/**
 * main - Entry point
 *
 * @c: character declaration
 * @i: integer declaration
 * @li: long integer declaration
 * @lli: long long integer declaration
 * @f: float declaration
(*
 * Description: This program prints
 * the various data types on computer
 * it is compiled on. It returns 0 too.)?
 * 
 * Return: Always 0 (meaning, success)
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
