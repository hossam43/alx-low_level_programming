#include <stdio.h>
#define __FILE__
#endif
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("%s\n", strrchr(__FILE__, '/') + 1);
return (0);
}
