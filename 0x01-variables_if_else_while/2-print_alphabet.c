#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program thats prints in alphabetic.
 * Return: Always 0.
 *
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
