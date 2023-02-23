#include "main.h"

/**
 * _isdigit - Check if a character is a digit.
 * @x: the number to be checked.
 * Return: 1 and 0 for anything else.
 */

int _isdigit(int x)

{
	if (x >= 48 && <= 57)
	{
		return (1);
	}
	return (0);
}
