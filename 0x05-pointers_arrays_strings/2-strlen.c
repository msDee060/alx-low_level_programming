#include "main.h"

/**
* _strlen - function that returns length of string, @s.
* @s: the character.
*
* return: length of a @s.
*/
int _strlen(char *s)
{
int length = 0;

while (*s++)
length++;
return (length);
}
