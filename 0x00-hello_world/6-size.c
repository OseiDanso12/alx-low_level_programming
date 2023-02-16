#include <stdio.h>
/**
 * main - Prints the size of various tpyesa based on the computer it is compliled and run on
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n," sizeof(char));
	printf("Size of an int: %lu byte(s)\n," sizeof(int));
	printf("Size of a long int: %lu byte(s)\n," sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n," sizeof(long long int));
	printf("Size of a float: %lu byte(S)\n," sizeof(float));
	return (0);
}
