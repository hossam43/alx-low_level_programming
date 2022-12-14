#include "main.h"
#include <stdio.h>
/**
 * add - Adds two integers.
 * @n: The start of counting.
 *
 * Return: The result of the addition.
 */
void print_to_98(int n)
{
int i;
for (i = n; i <= 98 ; i++)
{

printf("%d, ", i);
}
if (n != 98)
{
for (i = n; i >= 98; i--)
	{
	printf("%d, ", i);
	}
}
printf("\n");
}
