#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])
{
int num, mul = 1, argvNum;

if (argc < 2)
{
printf("Error\n");

return (1);
}

for (num = 1; num < argc; num++)
{
argvNum = strtol(argv[num], NULL, 10);

mul *= argvNum;
}

printf("%d\n", mul);

return (0);
}
