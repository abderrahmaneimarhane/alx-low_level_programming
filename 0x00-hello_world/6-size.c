#include <stdio.h>

/**
 * main - Entry point
 * Description:  prints the sizeof various types.
 * Return: 0 always returns 0, indicating successful completion.
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0); /* return statement indicates a succesful completion*/
}
