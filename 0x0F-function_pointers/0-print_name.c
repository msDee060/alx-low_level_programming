#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name - prints a name.
  * @name: is the name to be printed.
  * @f: is the function pointer.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
