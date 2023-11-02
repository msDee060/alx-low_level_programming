#include <stdio.h>

/**
  * largest_prime_factor -  finds and prints the largest prime factor of
  * the number 612852475143.
  * @n: is the long long integer.
  * Return: largest prime number.
  */
long largest_prime_factor(long n)
{
	long largest = -1;
	long i;

	while (n % 2 == 0)
	{
		largest = 2;
		n = n / 2;
	}

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		largest = n;
	}
	return (largest);
}

/**
  * main - checks code
  * Return: Always 0.
  */
int main(void)
{
	long num, largest_prime;

	num = 612852475143;

	largest_prime = largest_prime_factor(num);
	printf("%ld\n", largest_prime);

	return (0);
}
