#include "main.h"
#include <stdio.h>

/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: string.
* @accept: character.
* Return: a pointer to byte s.
*/
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;

while (*a)
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
