#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the name of the file followed by new line
 * @argc: number of argument entered in the command line
 * @argv: array argument value
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, counter;
	counter = 0;
	for (i = 0; i < argc; i++)
	{
		printf("%d\n",argc);
		sum += atoi(argv[i]);
	}
	printf("%d\n",counter);

	return (0);
}
