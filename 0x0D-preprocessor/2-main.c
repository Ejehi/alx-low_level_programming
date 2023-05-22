#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the name of the file it was compiled from
 * 
 * Return: Always (0) on success
 */
int main()
{
	printf("%s\n", _FILE_);
	return (0);
}
