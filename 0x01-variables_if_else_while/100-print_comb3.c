#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch, kh;
for (ch = '0'; ch <= '8'; ch++)
{
	for (kh = '1'; kh <= '9'; kh++)
	{
	if (ch < kh)
	{
	putchar(ch);
	putchar(kh);
	if (ch != '8')
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
}
putchar('\n');
return (0);
}
