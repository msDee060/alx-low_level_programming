#include "lists.h"
void first_part(void)__attribute__ ((constructor));
/**
  * first_part - runs before main function.
  */
void first_part(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
