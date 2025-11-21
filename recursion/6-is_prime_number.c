#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - Returns 1 if the input integer is a prime number
 * @n: The number to check
 * @i: The divisor to test (starts at 2)
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n, int i)
{
	if (n < 2)		// Si n est inférieur à 2…
		return (0); // …alors ce n'est PAS un nombre premier.

	if (i * i > n)	// Si i² dépasse n…
		return (1); // …alors aucun diviseur n'a été trouvé → n est premier.

	if (n % i == 0) // Si n est divisible par i…
		return (0); // …alors n n'est PAS premier.

	return (is_prime_number(n, i + 1)); // Sinon on teste le diviseur suivant (i + 1).
}
