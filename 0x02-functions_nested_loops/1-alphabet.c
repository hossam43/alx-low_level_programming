#include "main.h"
/**
 * print_alphabet - to print all alphsbet.
 * Return: Nothing.
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
