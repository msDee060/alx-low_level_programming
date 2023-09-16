#include <stdio.h>

/**
  * main - entry point.
  *
  * Return: 0 always on success
  */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		if (a % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
		printf("%d", a);
		}
		if (a != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
