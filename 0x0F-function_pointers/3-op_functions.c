#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  * op_add - returns the sum of two numbers.
  * @a: is the first number.
  * @b: is the second number.
  * Return: the sum.
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the differnce of two numbers.
 * @a: is the first number.
 * @b: is the second number.
 * Return: the difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns product of two numbers.
  * @a: the first number.
  * @b: the second number.
  * Return: the product.
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - return result of the division.
  * @a: is the first number.
  * @b: is the second number.
  * Return: the quotient of a and b.
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - returns the remainder of the division.
  * @a: is the first number.
  * @b: is the second number>
  * Return: the remainder.
  */
int op_mod(int a, int b)
{
	return (a % b);
}
