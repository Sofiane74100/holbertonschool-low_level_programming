#include <stdlib.h>
#include <time.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return 0:
*/

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


if (n > 0)
	{
printf("%d is positive\n");
	}
else if (n == 0)
	{
		printf("%d is zero\n");
	}
	else
	{
		printf("%d is negative\n");
	}
return (0);
}
