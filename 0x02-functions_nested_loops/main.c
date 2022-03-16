#include "0-putchar.c"

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success/correct 1.
 *on error, return an error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
