#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main()
{
printf("%s\n", strrchr(__FILE__, '/') + 1);
return (0);
}
