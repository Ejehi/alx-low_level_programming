#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, n, m;

	i = 48;
	n = 48;
	m = 48;

	while (n < 58)
	{
		i = 48;
		while (i < 58)
		{
			m = 48;
			while (m < 58)
			{
				if (n != i && n != m && i != m && n < i && i < m)
				{
					putchar(n);
					putchar(i);
					putchar(m);
					if (i == 56 && n == 55 && m == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				m++;
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
