#inclure « function_pointers.h »
#inclure <stdio.h>

/**
 *print_name - imprime le nom d’une fonction
 *@name : pointeur
 *@f : pointeur
 *Retour : nul
 */

void print_name(char *nom, void (*f)(char *))
{
if (nom == NULL || f == NULL)
rendre;
(*f) (nom);
}
