#include "main.h"
/**
 * print_last_digit - to print  the last digit.
 * @n: the number to find its abslute.
 * Return: 1 for lowercase values.
 */
int print_last_digit(int n)
{
int last_d = n % 10;
if (last_d < 0)
{
last_d = (-1) * last_d;
}
_putchar(last_d + '0');
return (last_d);
}
