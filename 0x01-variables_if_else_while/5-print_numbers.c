#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int n,baseTen;
for (n = 0; n < 10 ; n++)
{
baseTen = n % 10;
printf ("%d",baseTen);
}
printf("\n");
return (0);
}
