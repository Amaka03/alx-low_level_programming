#include <stdio.h>

/**
* main - Lists all the multiples of 3 or 5 below 1024 (excluded)
*
* Return: Always 0(Success)
*/
int main(void)
{
	int in, sum = 0;

	for (in = 0; in < 1024; in++)
	{
		if ((in % 3) == 0 || (in % 5) == 0)
			sum += in;
	}

	printf("%d\n", sum);

	return (0);
}
