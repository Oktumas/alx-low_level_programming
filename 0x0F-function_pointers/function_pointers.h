#ifndef FUNCTION_POINTERS_H
#définir FUNCTION_POINTERS_H

#inclure <stdio.h>
void print_name(char *nom, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);

#endif
