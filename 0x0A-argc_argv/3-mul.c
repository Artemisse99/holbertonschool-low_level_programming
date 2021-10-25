#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main - prints the number of arguments passed into it
 * @argv: Parameters
 * @argc: Parameters
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
