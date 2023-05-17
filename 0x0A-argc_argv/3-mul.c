#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: (0) if success and (1) otherwise
 */
int main(int argc, char *argv[])
{
	int mult, i, n;

	if (argv[3] == NULL)
	{
		i = atoi(argv[1]);
		n = atoi(argv[2]);
		mult = i * n;
		printf("%d\n", mult);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
