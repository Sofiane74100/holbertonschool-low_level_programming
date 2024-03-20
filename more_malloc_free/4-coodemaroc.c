#include <stdlib.h>
#include <stdio.h>

int main ()
{

int n;

printf("Entrer un entier\n");
scanf("%d", &n);

if (n % 2 == 0)
	printf("%d est pair\n",n);

else
	printf("%d impair\n",n);

	return (0);
}
