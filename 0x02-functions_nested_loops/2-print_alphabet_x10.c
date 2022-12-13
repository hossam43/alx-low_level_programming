#include "main.h"
/**
 * print_alphabet_x10 - to print alphsbet ten times.
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
int ch, counter;
for (counter = 0; counter < 10; counter++)
{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar (ch);
	}
	if (ch == 'z')
	{
	ch = 'a';
	}
_putchar('\n');
}
return;
}
