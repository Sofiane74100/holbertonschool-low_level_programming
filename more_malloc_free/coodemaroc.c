#include <stdlib.h>
#include <stdio.h>

int main ()
{

int n;

printf("Entrer un entier\n");
scanf("%d, &n");

if (n % 2 == 0)
	printf("pair\n",n);

else
	printf("impair",n);

	return (0);
}
