#include <stdio.h>
#include "main.h"
/**
 *main - prints the number of arguments passed into it
 * @argv: Parameters
 * @argc: Parameters
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int var = 0;
	while (var < argc)
	{
		printf("%s\n", argv[var]);
		var++;
	}
	return (0);
}
