#include <stdio.h>

/**
 * main - prints the sieze of many var types
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of char: %lu byte(s)\n", sizeof(a));
	printf("size of an int: %lu byte(s)\n", sizeof(b));
	printf("size of a long int: %lu byte(s)\n", sizeof(c));
	printf("size of long long int: %lu byte(s)\n", sizeof(d));
	printf("size of a float: %lu bytes(s)\n", sizeof(e));
	return (0);
}

