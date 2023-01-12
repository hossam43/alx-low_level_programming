#include "main.h"
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
unsigned int = i;

if (size == 0)
{
return (NULL);
}
t = malloc(size * sizeof(char));
while (i <= size)
{
t[i] = c;
_putchar(t[i]);
i++;
}
free(t);
return (t);
}
