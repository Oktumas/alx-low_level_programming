nclude <stdlib.h>
<<<<<<< HEAD

=======
>>>>>>> e3c48d54dca0af5d1da7d7d43d87cc3e4280d57c
#include <time.h>
#include <stdio.h>

/**
 * <<<<<<< HEAD
 *  *
 *   * * main-print the last digit of the random number
 *    *
 *     * * stored in the variable n
 *      *
 *       * * Return: 0 if successful
 *        *
 *         * */

=======
* main-print the last digit of the random number
* * stored in the variable n
* * Return: 0 if successful
* */
>>>>>>> e3c48d54dca0af5d1da7d7d43d87cc3e4280d57c
int main(void)
{
	<<<<<<< HEAD

			int n;



		srand(time(0));

			n = rand() - RAND_MAX / 2;

				printf("Last digit of %d is %d ", n, n % 10);

					if (n % 10 > 5)

								printf("and is greater than 5\n");

						else if (n % 10 == 0)

									printf("and is 0\n");

							else if (n % 10 < 6 && n % 10 != 0)

										printf("and is less than 6 and not 0\n");

								return (0);

								=======
									int n;

								srand(time(0));
								n = rand() - RAND_MAX / 2;
								printf("Last digit of %d is %d ", n, n % 10);
								if (n % 10 > 5)
									printf("and is greater than 5\n");
								else if (n % 10 == 0)
									printf("and is 0\n");
								else if (n % 10 < 6 && n % 10 != 0)
									printf("and is less than 6 and not 0\n");
								return (0);
								>>>>>>> e3c48d54dca0af5d1da7d7d43d87cc3e4280d57c
}

