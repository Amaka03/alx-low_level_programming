#include <stdio.h>

/**
*main - fibonacci <3
*
*Purpose - no hardcode
*
*Return:  (Success)
*/

int main(void)
{
	unsigned long int i;
	unsigned long int forr = 1;
	unsigned long int latr = 2;
	unsigned long int l = 1000000000;
	unsigned long int forr1;
	unsigned long int forr2;
	unsigned long int latr1;
	unsigned long int latr2;

	printf("%lu", forr);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", latr);
		latr += forr;
		forr = latr - forr;
	}

	forr1 = (forr / l);
	forr2 = (forr % l);
	latr1 = (latr / l);
	latr2 = (latr % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", latr1 + latr2 / l);
		printf("%lu", latr2 % l);
		lat1 = latr1 + forr1;
		for1 = latr1 - forr1;
		latr2 = latr2 + forr2;
		forr2 = latr2 - forr2;
	}
	printf("\n");
	return (0);
}
