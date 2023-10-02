#include "main.h"

/**
* _strncat - concatenates two strings.
* @dest: the destination.
* @src: the source.
* @n: the integer.
* Return: a pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
char *dest_p = dest;

while (*dest_p != '\0')
{
dest_p++;
}
while (*src != '\0' && n > 0)
{
*dest_p = *src;
src++;
dest_p++;
n--;
}
*dest_p = '\0';

return (dest);
}
