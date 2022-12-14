#include "main.h"
/**
 * print_last_digit - to print  the last digit.
 * @n: the number to find its abslute.
 * Return: 1 for lowercase values.
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = (-1) * n;
n = n % 10;
return (n);
}
else if (n == 0)
{
return (n);
}
else
{
n = n % 10;
return (n);
}
}
