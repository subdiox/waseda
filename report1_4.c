#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    int is_prime = 1;
    for (int i = 2; i <= sqrt(n); i ++) {
        if (n % i == 0) {
            is_prime = 0;
        }
    }
    return is_prime;
}

int main() {
    int n;
    scanf("%d", &n);

    if (is_prime(n)) {
        printf("%d is prime number.\n", n);
    } else {
        printf("%d is not prime number.\n", n);
    }

}
