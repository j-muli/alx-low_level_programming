#include <stdio.h>

/**
 *  *main-prints the size of varioys types on computer
 *
 *   *Retutn: 0
 */
int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of int: %d bytes(s)\n", sizeof(int));
	printf("size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %d bytes(s)\n" sizeof(long long int));
	printf("size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
