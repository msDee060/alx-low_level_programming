#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string.
* @s: is the string.
* @c: is the character to be located.
* Return: a pointer.
*/
char *_strchr(char *s, char c)
{
int i;

i = 0;

while (s[i] != '\0')
{
if (s[i] == c)
return (&(s[i]));
i++;
}
return (NULL);
}
