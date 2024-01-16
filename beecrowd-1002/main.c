#include <stdio.h>
#include <math.h>

int main() {
    double raio = 0;
    double area = 0;
    const double pi = 3.14159;

    scanf("%lf", &raio);

    area = pi * pow(raio, 2);

    printf("A=%.4lf\n", area);

    return 0;
}