#include <stdio.h>

/**
 * main - This prints numbers 0 - 9.
 *
 * Return: is always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}

