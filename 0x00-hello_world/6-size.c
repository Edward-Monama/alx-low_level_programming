#include <stdio.h>
/**
 * main -a C program that prints the size of various types
 * return: 0 (success)
 */
int main(void)
{
	printf("size of a char: %zu bytes(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
