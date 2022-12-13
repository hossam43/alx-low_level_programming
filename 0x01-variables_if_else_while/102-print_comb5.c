#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch, kh;
for (ch = 0; ch <= 98; ch++)
{
	for (kh = ch + 1; kh <= 99; kh++)
	{			
			putchar((ch / 10) + '0');
			putchar((ch % 10) + '0');
			putchar(' ');
			putchar((kh / 10) + '0');
			putchar((kh % 10) + '0');
			if (ch == 98 && kh == 99)
				continue;
			putchar (',');
			putchar (' ');
	}
}
putchar('\n');
return (0);
}
