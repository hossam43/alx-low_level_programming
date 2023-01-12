#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array using a user define size and char
 * @size: the number of the element
 * @c: the char to full the array with
 *
 * Return: array.
 */

char *create_array(unsigned int size, char c)
{
char *t;
unsigned int i;

if (size == 0)
{
return (NULL);
}
t = malloc(size * sizeof(char));
for (i = 1; i < size; i++)
{
t[i] = c;
_putchar(t[i]);
i++;
}
return (t);
}
