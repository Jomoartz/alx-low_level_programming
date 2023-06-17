#include <stdio.h>

/**
 * main - This prints numbers 0 - 9.
 *
 * Return: Is always 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
