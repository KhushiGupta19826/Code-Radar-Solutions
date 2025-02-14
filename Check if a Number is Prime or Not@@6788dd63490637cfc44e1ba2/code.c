#include <stdio.h>
#include <math.h>

int main() {
    int a, isPrime = 1; // Assume a is prime initially
    scanf("%d", &a);

    if (a <= 1) {
        printf("Not Prime\n");
    } else {
        for (int i = 2; i <= a**0.5; i++) { // Loop from 2 to sqrt(a)
            if (a % i == 0) {
                isPrime = 0; // Found a divisor, mark as not prime
                break;
            }
        }
        if (isPrime)
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }
    return 0;
}
