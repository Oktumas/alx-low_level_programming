#inclure « function_pointers.h »

/**
 * print_name - Imprime un nom
 * @name: Le nom à imprimer
 * @f: Pointeur vers la fonction
  *
 * Retour: Rien
  */
void print_name(char *nom, void (*f)(char *))
{
	if (nom != NULL && f != NULL)
		f(nom);
}
