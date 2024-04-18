#include <stdio.h>

double f(double x) {
    return x * x;
}

double integrate(double (*f)(double), double a, double b, int n) {
    double dx = (b - a) / n;
    double sum = 0.0;
    int i;
    for (i = 0; i < n; i++) {
        sum += f(a + (i + 0.5) * dx);
    }
    return sum * dx;
}

double integrate_n(double (*f)(double), double a, double b, int n, int m) {
    if (m == 0) {
        return integrate(f, a, b, n);
    } else {
        return integrate_n(f, a, b, n, m - 1);
    }
}

int main() {
    double a = 0.0, b = 1.0;
    int n = 488, m = 3;
    double result = integrate_n(f, a, b, n, m);
    printf("The result of %d-order integral of f(x) from %f to %f is: %f\n", m, a, b, result);
    return 0;
}

