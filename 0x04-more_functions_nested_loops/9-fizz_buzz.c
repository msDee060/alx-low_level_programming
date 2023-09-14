#include <stdio.h>

/**
  * main - entry point.
  *
  * Return: 0 always on success
  */
int main(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
		{
			printf(" ");
		}
		if (a % 10 == 0)
		{
			printf("\n");
		}
	}
	return (0);
}
