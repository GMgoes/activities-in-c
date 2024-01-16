#include <stdio.h>

int main() {
    double nota_a = 0;
    double nota_b = 0;
    double media = 0;

    scanf("%lf%lf", &nota_a, &nota_b);

    media = (((nota_a * 3.5) + (nota_b * 7.5)) / 11);

    printf("MEDIA = %.5lf\n", media);

    return 0;
}