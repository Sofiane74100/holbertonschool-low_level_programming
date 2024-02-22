#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n = rand() - RAND_MAX / 2;

    printf("%d ", n);

    if (n > 0) {
        printf("est positif\n");
    } else if (n < 0) {
        printf("est négatif\n");
    } else {
        printf("est zéro\n");
    }

    return 0;
}




