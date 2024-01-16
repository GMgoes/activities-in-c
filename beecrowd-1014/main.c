#include <stdio.h>

int main() {
    int distancia = 0;
    float combustivel = 0;
    float total = 0;

    scanf("%i%f", &distancia, &combustivel);

    total = distancia / combustivel;

    printf("%.3f km/l\n", total);

    return 0;
}