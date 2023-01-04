#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
int e;

if (*s == '\0')
{
return 0;
}
e = 0;
e++;
e += _strlen_recursion(b + 1);
return e;
}
