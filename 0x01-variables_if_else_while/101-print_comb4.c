#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch, kh, oh;
for (ch = '0'; ch <= '8'; ch++)
{
	for (kh = '1'; kh <= '9'; kh++)
	{
		for (oh = '2'; oh <= '9'; oh++)
		{
			if (ch < kh && kh < oh)
			{
			putchar(ch);
			putchar(kh);
			putchar(oh);
			if (ch != '7')
			{
			putchar (',');
			putchar (' ');
			}
			}
		}
	}
}
putchar('\n');
return (0);
}
