#include <stdio.h>
void before_main(void) __attribute__((constructor));
/**
 * before_main - prints string pre main function execution.
 *
 * Return: unnecessary as function returns void.
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
