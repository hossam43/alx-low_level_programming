#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - increment or decrement the entered number till 98.
 * @n: The start of counting.
 *
 * Return: The result of the addition.
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
{
printf("%d, ", n);
}
printf("%d", n);
}
else
{
	for (n = n; n > 98 ; n--)
	{
	printf("%d, ", n);
	}
printf("%d", n);
}
printf("\n");
}
