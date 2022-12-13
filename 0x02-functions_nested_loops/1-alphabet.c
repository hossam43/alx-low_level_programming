#include "main.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
int ch = 97, kh = 122;
while(ch <= kh)
{
_putchar(ch);
ch++;
}
_putchar('\n');
return;
}
