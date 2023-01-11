#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the mul of numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If no numbers provided return - 1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])
{
int num, mul = 1, argvNum;

if (argc != 3)
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
