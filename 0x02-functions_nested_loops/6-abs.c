#include "main.h"
/**
 * _abs - to check if the entered value is in lowercase or not.
 * @n: the number to find its abslute.
 * Return: 1 for lowercase values.
 */
int _abs(int n)
{
if (n < 0)
{
return ((-1) * n);
}
else if (n == 0)
{
return (0);
}
else
{
return (n);
}
}
