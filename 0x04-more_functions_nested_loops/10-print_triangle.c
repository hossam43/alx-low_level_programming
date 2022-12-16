#include "main.h"

/**
 * print_triangle - Print a triangle
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
int i, j, k;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = size; j > i; j--)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
_putchar('\n');
}
