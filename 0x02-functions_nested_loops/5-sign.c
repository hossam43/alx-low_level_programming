#include "main.h"
/**
 * print_sign - to check if the entered value is in lowercase or not.
 * @n: to check the number sign.
 * Return: 1 for lowercase values.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
