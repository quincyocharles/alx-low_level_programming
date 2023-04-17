#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to a struct dog
 *
 * Description: If an element of d is NULL, print (nil) instead of this
 * element. If d is NULL, print nothing.
 **/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age >= 0) ? d->age : -1);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
