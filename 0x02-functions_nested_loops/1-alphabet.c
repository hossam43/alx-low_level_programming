#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success).
 */
void print_alphabet(void)
{
int ch = 97, kh = 122;
while (ch <= kh)
{
_putchar(ch);
ch++;
}
_putchar('\n');
return;
}
