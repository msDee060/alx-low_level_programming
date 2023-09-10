#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	i = '0';
	j = '0';
	k = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			k = '0';

			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
		j = '0';
	}
	putchar('\n');
	return (0);
}
