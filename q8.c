#include <stdio.h>

// Recursive function to calculate power
int power(int a, int b) {
    if (b == 0)
        return 1;          // base case
    else
        return a * power(a, b - 1);
}

int main() {
    int a, b;

    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);

    printf("%d", power(a, b));

    return 0;
}