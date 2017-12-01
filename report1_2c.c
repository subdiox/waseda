#include <stdio.h>

long long memory[100][100];

void init_memory() {
    for (int i = 0; i < 100; i ++) {
        for (int j = 0; j < 100; j ++) {
            memory[i][j] = -1;
        }
    }
}

long long combination(int n, int r) {
    if (r > n / 2) r = n - r;
    if (r == 0) return 1;
    if (r == 1) return n;
    if (memory[n][r] == -1) {
        memory[n][r] = combination(n - 1, r) + combination(n - 1, r - 1);
    }
    return memory[n][r];
}

int main() {
    init_memory();
    for (int i = 40; i <= 50; i ++) {
        printf("65_C_%d: %lld\n", i, combination(65, i));
    }
}
