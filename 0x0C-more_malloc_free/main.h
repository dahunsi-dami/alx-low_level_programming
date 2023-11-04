#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int all_digits(char *p);
void err(void);
int _strlen(char *p);
int main(int argc, char *argv[]);

#endif
