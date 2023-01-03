#include "main.h"

/**
 * print_rev - a function to print a string in reverse
 * @s : the array of a string
 **/

void print_rev(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;
		p--;
	}
	while (p >= s)
	{
		putchar(*p);
		p--;
	}
}
