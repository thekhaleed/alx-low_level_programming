#include <stdio.h>
#include <stdlib.h>

/**
 * main- main function
 * @argc: counts arguments
 * @argv: char
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul;
	int a, b;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
