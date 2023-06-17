#include <stdio.h>

/**
 * main - This prints lowercase alphabets in reverse,
 * this followed by a new line(\n)
 * Return: is always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

