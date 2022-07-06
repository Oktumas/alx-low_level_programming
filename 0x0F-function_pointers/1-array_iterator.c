#inclure « function_pointers.h »

/**
 * array_iterator - fonction qui exécute un tableau de fonctions
 * @array : tableau des fonctions à exécuter
 * @size : taille du tableau
 * @action: pointeur vers la fonction
  *
 * Retour: Rien
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	non signé int i = 0;

	if (tableau != NULL && action != NULL && taille > 0)
	{
		tandis que (i < taille)
		{
			action(tableau[i]);
			i++;
		}
	}
}
