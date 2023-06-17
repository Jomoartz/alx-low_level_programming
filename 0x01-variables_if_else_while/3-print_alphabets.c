#include <stdio.h>

/**
 * main - This prints an alphabet in lowercase, and then in uppercase,
 * followed by a new line(\n)
 * Return - Is always 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);

}
