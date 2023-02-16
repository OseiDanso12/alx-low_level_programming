#include <stdio.h>
/**
 * main - prints the size 0f various type of a computer
 * Return: 0 (success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));

printf("Size of an int: %lu byte(s)\n", sizeof(int));

printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(S)\n", sizeof(float));
return (0);
}
gcc 6-size.c -m32 -o size32 2> /tmp/32
gcc 6-size.c -m64 -o size64 2> /tmp/64
