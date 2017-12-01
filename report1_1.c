#include <stdio.h>

double dxdy(double x, double y) {
    return -x * y;
}

int main() {
    double y = 1.0;
    for (int x100 = 0; x100 <= 30; x100 ++) {
        double x = (double) x100 / 100;
        double k1 = dxdy(x, y);
        double k2 = dxdy(x + 0.1, y + 0.1 * k1);
        y += 0.1 * (k1 + k2) / 2;
        printf("%f %f\n", x, y);
    }
}
