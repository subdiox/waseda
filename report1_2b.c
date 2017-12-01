#include <stdio.h>

int factorial(int n) {
    int factorial = 1;
    for (int i = n; i > 0; i --) {
        factorial *= i;
    }
    return factorial;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main() {
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d\n", combination(n, r));
}
