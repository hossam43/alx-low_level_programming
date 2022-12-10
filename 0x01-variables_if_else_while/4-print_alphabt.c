#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q')
{ch++;}
putchar(ch);
putchar('\n');
}
return (0);
}
