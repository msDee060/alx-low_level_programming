#include <stdlib.h>
#include "dog.h"

/**
  * _strlen - returns the length of a string.
  * @s: is the string to evaluate.
  * Return: length of a string.
  */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  * _strcpy - copies the string pointed to by the scr.
  * @src:string to be copied.
  * @dest: is the destination pointer to the buffer.
  * Return: the pointer to dest.
  */
char *_strcpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (success), otherwise NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = (char *)malloc(len1 + 1);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = (char *)malloc(len2 +  1);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
