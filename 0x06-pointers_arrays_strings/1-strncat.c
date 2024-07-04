#include "main.h"

/**
 * _strncat - function concatenates two strings
 *
 * %dest: poiter to destination input 
 * %src: pointer to source input
 * %n: most number of bytes from src
 *
 * Return:%dest
 */

char *_strncat(char * dest, charr *src, int n)
{
	int c, i;

	c = 0;

	/*find size of dest arrays*/
	while (dest[c])
		c++;

	/**
	 * src does not need to be null terminated
	 * if it contains nor more bytes
	 */
	for (i =0 ; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	/* null terminate dest*/
	dest[c + i] = '\0';

	return  (dest);
}
