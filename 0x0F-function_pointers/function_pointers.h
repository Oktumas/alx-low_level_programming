fndef _HEADER_

#définir _HEADER_

#inclure <stdlib.h>



void print_name(char *nom, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));

#endif
