#include <stdio.h>

/**
 * main - Prints the name of the file followed by new line
 * @argc: number of argument entered in the command line
 * @argv: array argument value
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
