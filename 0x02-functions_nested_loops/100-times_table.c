#include "main.h"

/**
* print_times_table - prints the n times table.
* @n: number to be entered.
*
* Return: the times table.
*/
void print_times_table(int n)
{
int i, j;	
if (n < 0 || n > 15)
{
return;
}

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int product = i * j;

/* Print the product with appropriate formatting*/
if (j == 0)
{
_putchar('0' + product);
}
else
{
_putchar(',');
_putchar(' ');

if (product < 10)
{
_putchar(' ');
}
else
{
_putchar('0' + (product / 10));
}

_putchar('0' + (product % 10));
}
}
_putchar('\n');
}
}
