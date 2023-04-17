#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog with the given name, age, and owner
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the new dog, or NULL if malloc fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* Allocate memory for the new dog */
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	return (NULL);

	/* Allocate memory and copy the name */
	char *new_name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (new_name == NULL)
	{
	free(new_dog);
	return (NULL);
	}
	_strcpy(new_name, name);

	/* Allocate memory and copy the owner */
	char *new_owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (new_owner == NULL)
	{
	free(new_name);
	free(new_dog);
	return (NULL);
	}
	_strcpy(new_owner, owner);

	/* Set the dog's attributes and return it */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}

/**
 * _strlen - returns the length of a string
 *
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s++))
	len++;
	return (len);
}

/**
 * _strcpy - copies a string from src to dest
 *
 * @dest: the destination buffer
 * @src: the source string
 */
void _strcpy(char *dest, char *src)
{
	while (*src)
	*(dest++) = *(src++);
	*dest = ('\0');
}
