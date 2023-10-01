#include <stdio.h>
#include <stdbool.h>

/**
  * is_divisible - tocheck if number can be divided.
  * @n: is the number.
  * @divisor: is the divisor.
  * Return: answer.
  */
bool is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (false);
	}
	if (divisor * divisor > n)
	{
		return (false);
	}
	if (n % divisor == 0)
	{
		return (true);
	}
	return (is_divisible(n, divisor + 1));
}

/**
  * is_prime_number - returns 1 if the input integer is a prime number.
  * @n: is the number to be checked.
  * Return: 1 or 0.
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	return (!is_divisible(n, 2));
}
