#include "main.h"

/**
 * print_rev - a function to print a string in reverse
 * @s : the array of a string
 **/

void print_rev(char *s)
{
int size = sizeof(s) / sizeof(s[0]);
int i = size - 1;

while (i >= 0)
{
putchar(s[i]);
i--;
}
}
