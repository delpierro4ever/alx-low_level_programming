#include <stdio.h>

/**
 * main - Entry point of program
 * Return: always zero
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z' || i != 'e' || i != 'q'; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
	putchar('\n');
	return (0);
}
