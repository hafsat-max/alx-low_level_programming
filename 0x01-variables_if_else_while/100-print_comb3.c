#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m, n;
	for (m = '0'; m <= '9'; m++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if ((m < n) & (n <= '9'))
			{

			
				putchar(m);
				putchar(n);
				if ((n < '9') | (m < '8'))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
