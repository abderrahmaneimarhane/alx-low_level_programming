#include <unistd.h>

/**
 * _putchar - writesthe character c to stdout
 * %c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is not appropriately.
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
