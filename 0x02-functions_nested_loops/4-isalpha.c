#include "main.h"

/**
 * _isalpha - checks for alphabetic characters.
 * @c: placholder for character to bo checked.
 * Return: return 1 if c is a letter, and 0 otherwise.
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
