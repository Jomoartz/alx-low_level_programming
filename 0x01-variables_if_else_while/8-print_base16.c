#include <stdio.h>

/**
 * main - This prints numbers from 0 - 9 and letters from a - f.
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
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
