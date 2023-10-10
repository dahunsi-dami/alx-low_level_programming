#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *a = "_putchar";
	int length;
	int i;

	length = strlen(a);

	for (i = 0; i <= length; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');

	return (0);
}
