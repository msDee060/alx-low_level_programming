#include <stdio.h>

/**
  * main - prints the sum of multiples of 3 or 5 below 1024.
  * Return: 0 on success.
  */
int main(void)
{
	int i, j;

	j = 0;
	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
		i++;
	}
	printf("%i\n", j);
	return (0);
}
