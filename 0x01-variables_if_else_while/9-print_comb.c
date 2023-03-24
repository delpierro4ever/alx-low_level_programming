#include <stdio.h>

/**
 * main - This is main entry point of the program
 *
 * Return: always zero
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 9)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
