#include <stdio.h>

int main() {
    int distancia = 0;
    int tempo = 0;
    int total = 0;
    float gasto = 0;

    scanf("%i", &tempo);
    scanf("%i", &distancia);

    total = tempo * distancia;
    gasto = total/12.0;

    printf("%.3f\n",gasto);

    return 0;
}