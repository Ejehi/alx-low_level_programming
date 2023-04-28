#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 up to 9
 * @i: number to be printed
 * Return: void
 */
void print_numbers(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
