#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - create an array using a user define size and char
 * @str: the string to be copy
 *
 * Return: array.
 */

char *_strdup(char *str)
{
int i;
char *t;
int size = strlen(str);
t = malloc((sizeof(str) + 1) * sizeof(char));
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
t[i] = str[i];
}
return (t);
}
