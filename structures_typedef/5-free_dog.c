#include "dog.h"

void free_dog(dog_t *d)
{
	free(d);
	free(free_dog);
}
