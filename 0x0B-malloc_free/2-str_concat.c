#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - create an array using a user define size and char
 * @s1: the first string
 * @s2: the second string
 * Return: array.
 */
char *str_concat(char *s1, char *s2)
{
int i;
char *t;
if (s1 == NULL || s2 == NULL)
{
return ("");
}
int size = strlen(s1);
int fullSize = strlen(s1) + strlen(s2);
t = malloc((fullSize + 1) * sizeof(char));
for (i = 0; i < size; i++)
{
t[i] = s1[i];
}
for (i = 0; i < strlen(s2); i++)
{
t[size + i] = s2[i];
}
t[fullSize] = '\0';
return (t);
}
