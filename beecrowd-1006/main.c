#include <stdio.h>

int main() {
    double nota_a = 0;
    double nota_b = 0;
    double nota_c = 0;
    double media = 0;

    scanf("%lf%lf%lf", &nota_a, &nota_b, &nota_c);

    media = (((nota_a * 2) + (nota_b * 3) + (nota_c * 5)) / 10);

    printf("MEDIA = %.1lf\n", media);

    return 0;
}