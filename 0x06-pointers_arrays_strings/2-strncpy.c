#include "main.h"

/**
 * _strncpy - A function that copies a string
 *
 * %dest:poiter to destination input buffer
 * %src:poiter to source input buffer
 * %n:bytes of src
 *
 * Return: %dest
 */

char *_strncpy(char *dest,char * src, int n)
{
	int i;

	/**
	 * iterate through src array
	 * where if there is no null byte
	 * among the first n byte of source
	 * the string placed in dest will not be
	 * null terminated
	 */
	for (i = 0; i <n && src [i] != '\0'; i++)
		dest[i] =src [i];
	/**
	 *
	 * if teh length of source is less than n 
	 * write additonal nullbytesto dest to 
	 * ensure that a total of n bytes is written
	 */
	while (i < n)
	{
		dest [i] = '\0'
		i++:
	}
{
	return (dest);
}
