#include <stdio.h>
#include <stdlib.h>
#include <time.h>

"/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/ "

int main(void)
{
	srand(time(((void *)0)));
	int n = rand() - RAND_MAX / 2;

	printf("%d ", n);

	if (n > 0)
	{
		printf("is positif\n");
	} else if (n < 0) {
		printf("is négative\n");
	} else {
		printf("is zéro\n");
	}

	return (0);
}




