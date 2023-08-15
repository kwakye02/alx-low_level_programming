#include "dog.h"
#include <stdlib.h>

/**
* fre_dog - frees dog
* @d: pointer
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
