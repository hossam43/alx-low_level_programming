#include "main.h"
/**
 * _isalpha - to check if the entered value is in lowercase or not.
 * @c: The character to check
 * Return: 1 for lowercase values.
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
