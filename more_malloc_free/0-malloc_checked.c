#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Alloue de la mémoire et gère les erreurs
 * @b: Nombre de bytes à allouer
 *
 * Description: Alloue dynamiquement b bytes de mémoire à l'aide de malloc.
 * Si l'allocation échoue, la fonction cause la terminaison du processus
 * avec le code de sortie 98.
 *
 * Return: Pointeur vers la mémoire allouée
 */

void *malloc_checked(unsigned int b)
// Fonction qui alloue b octets de mémoire et termine le programme si l'allocation échoue
{
	void *i;

	i = malloc(b); // Tente d'allouer b octets
	if (i == NULL)
		exit(98); // Termine le programme avec le code 98 en cas d'échec
	return (i); // Retourne le pointeur vers la mémoire allouée
}
