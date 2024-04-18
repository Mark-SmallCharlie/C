#include <stdio.h>

double sin(double x) {
    double sum = 0, t = x;
    int i, n = 1;
    for (i = 1; i <= 10; i++) {
        sum += t;
        t = -t * x * x / (n * (n + 1));
        n += 2;
    }
    return sum;
}

double cos(double x) {
    double sum = 0, t = 1;
    int i, n = 0;
    for (i = 1; i <= 10; i++) {
        sum += t;
        t = -t * x * x / (n * (n + 1));
        n += 2;
    }
    return sum;
}

double tan(double x) {
    return sin(x) / cos(x);
}

int main() {
    double x = 1.0;
    printf("sin(%f) = %f\n", x, sin(x));
    printf("cos(%f) = %f\n", x, cos(x));
    printf("tan(%f) = %f\n", x, tan(x));
    return 0;
}

