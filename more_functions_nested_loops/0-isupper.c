#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    
    int _isupper(int c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }

    char c;

    c = 'A;
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
