#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int st, t;
	char *ab;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	st = atoi(argv[1]);

	if (st < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ab = (char *)main;

	for (t = 0; t < st; t++)
	{
		if (t == st - 1)
		{
			printf("%02hhx\n", ab[t]);
			break;
		}
		printf("%02hhx ", ab[t]);
	}
	return (0);
}
