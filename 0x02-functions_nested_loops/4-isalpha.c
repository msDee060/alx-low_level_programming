#include "main.h"

/**
  * _isalpha - checks if character is in the alphabet.
  * @c: is character to be checked.
  *
  * Return: 1 is c is lowercase or uppercase, otherwise 0.
  */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
