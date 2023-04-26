#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *
 *@i: number to be checked
 *
 *Return: value of the last digit
 */
int print_last_digit(int i)
{
	int last_digit;

	if (i < 0)
	{
		last_digit = (i * -1) % 10;
	}
	else
	{
		last_digit = i % 10;
	}
	return (last_digit);
}
