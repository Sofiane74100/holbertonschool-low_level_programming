#include <stdio.h>

main ()
{

float fahr, celsius;

int mini, maxi, intervalle;

mini = 0;
maxi = 300;
intervalle = 20;

printf ("Fahrenheit | Celsius\n");

fahr = mini;
while (fahr <= maxi)
{
	celsius = (5.0/9.0) * (fahr-32.0);
	printf("%3.0f %6.1f\n", fahr, celsius);
	fahr = fahr + intervalle;
	}
}
