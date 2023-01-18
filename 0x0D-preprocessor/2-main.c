#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
printf("%s\n", strrchr(__FILE__, '/') + 1);
return (0);
}
