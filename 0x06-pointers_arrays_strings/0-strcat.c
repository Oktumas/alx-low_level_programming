nclude "main.h"



/**
 *
 *  * _strcat - concatenates two strings
 *
 *   *
 *
 *    * @dest: Second string
 *
 *     * @src: first string
 *
 *      *
 *
 *       * Return: pointer to resulting string dest
 *
 *        */



char *_strncat(char *dest, char *src)

{

	int x, y;



	for (x = 0; dest[x] != '\0'; x++)

		;

	for (y = 0; src[y] != '\0'; y++)

	{

		dest[x] = src[y];

		x++;

	}

	dest[x] = '\0';

	return (dest);

}
