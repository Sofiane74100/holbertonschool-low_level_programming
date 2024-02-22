#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(((void *)0)));
	int n = rand() - RAND_MAX / 2;

	printf("%d ", n);

	if (n > 0)
	{
		printf("is positif\n");
	} else if (n < 0) {
		printf("is négatif\n");
	} else {
		printf("is zéro\n");
	}

	return (0);
}




