#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    scanf("%d", &num);

    if (num < 2) {
        printf("Not Prime");
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Number is not prime
                break;
            }
        }
        if (isPrime) {
            printf("Prime");
        } else {
            printf("Not Prime");
        }
    }
    
    return 0;
}
