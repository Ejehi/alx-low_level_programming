#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 52; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
