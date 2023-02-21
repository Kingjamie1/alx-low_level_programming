#include <stdio.h>

/**
 * main - prints the numbers from 01 to 79, numbers separated by
 * a comma followed by a space, in ascending order.
 * Return: always 0
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)

		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 7 && digit2 == 7)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
