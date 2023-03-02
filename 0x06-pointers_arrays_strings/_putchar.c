#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes charcater c to stdout.
 * @c: The character to print.
 * Return: 1.
 * on error, -1 is returned, and errno is set appopriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
