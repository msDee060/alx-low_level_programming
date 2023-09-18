#include "main.h"

/**
* _strlen - function that returns length of string.
* @s: the character.
*
* return: length of a string.
*/
int _strlen(char *s)
{
int length = 0;

while (*s++)
length++;
return (length);
}
