#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to set
 * @age: age to set
 * @owner: owner to set
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL) // vérifie que le pointeur d n'est pas NULL
	{
		d->name = name;	  // le champ name de la structure pointe vers la même chaîne que name
		d->age = age;	  // le champ age de la structure reçoit la valeur age
		d->owner = owner; // le champ owner de la structure pointe vers la même chaîne que owner
	}
}
