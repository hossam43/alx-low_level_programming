#include "main.h"
/**
 * _islower - to check if the entered value is in lowercase or not.
 * c - the character to check its case
 * Return: 1 for lowercase values.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
