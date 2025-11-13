#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 * @c: the character to check
 *
 * Return: 1 if letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) // si c est inférieur ou egal a 'a' et que c est inférieur ou egale a 'z' ensuite si c et superieur ou egal a 'A' et que c est inférieur ou egal 'Z'
		return (1);										  // si ces en minuscule retourne en vrais
	else												  // sinon
		return (0);										  // si en ces majuscule retourne vrais
}
