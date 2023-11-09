#include <stddef.h>
#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

int _putchar(char c);
void print_name_as_is(char *name);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
