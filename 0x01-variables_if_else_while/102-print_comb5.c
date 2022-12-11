#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch, kh, oh, sh;
for (ch = '0'; ch <= '9'; ch++)
{
	for (kh = '0'; kh <= '9'; kh++)
	{
		for (oh = '0'; oh <= '9'; oh++)
		{	
			for (sh = '0'; sh <= '9'; ++sh)
			{
			if (ch == '0' && kh == '0' && oh == '0' && sh == '0')
			{
			continue;
			}
			else if (ch == '0' && kh == '0' || oh > kh && sh > kh && oh >= ch)
			{	
			putchar(ch);
			putchar(kh);
			putchar(' ');
			putchar(oh);
			putchar(sh);
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
