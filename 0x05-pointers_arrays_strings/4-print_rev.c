#include "main.h"

/**
 * print_rev - a function to print a string in reverse
 * @s : the array of a string
 **/

void print_rev(char *s)
{
	int size = sizeof(s) / sizeof(s[0]);

for (int i = size - 1; i >= 0; i--)
{
_putchar(s[i]);
}
}
