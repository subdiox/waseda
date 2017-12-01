#include <stdio.h>

int combination(int n, int r) {
    if (n == 0) {
        return 0;
    }
    if (r == 1) {
        return n;
    } else if (r == 0) {
        return 0;
    }
    return combination(n - 1, r) + combination(n - 1, r - 1);
}

int main() {
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d\n", combination(n, r));
}
