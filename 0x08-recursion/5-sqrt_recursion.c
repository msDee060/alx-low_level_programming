#include "main.h"
#include <stdio.h>

/**
* find_sqrt - to help with square root calculation.
* @n: the integer.
* @start: begin the calculation.
* @end: end the calculation.
* Return: calculation.
*/
int find_sqrt(int n, int start, int end)
{
int mid;

int long square;

if (start > end)
{
return (-1);
}
mid = (start + end) / 2;

square = (long)mid *mid;

if (square == n)
{
return (mid);
}
else if (square < n)
{
return (find_sqrt(n, mid + 1, end));
}
else
{
return (find_sqrt(n, start, mid - 1));
}
}

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: is the integer.
* Return: the natural square root.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (find_sqrt(n, 0, n));
}
