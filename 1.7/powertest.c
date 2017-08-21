#include <stdio.h>

int power(int m, int n);

// Test the power function
int main()
{
    int i;

    for (i = 0; i < 10; i++)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}

// Power: Raise base to nth power; n >= 0
int power(int base, int n)
{
    int p = 1;

    for (; n > 0; n--)
        p = p * base;
    return p;
}
