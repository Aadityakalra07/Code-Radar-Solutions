#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n); // Input a single integer greater than 0

    if (n < 2) {
        printf("Not Prime");
        return 0;
    }

    int is_prime = 1; 

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            is_prime = 0; 
            break;
        }
    }

    if (is_prime) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}

