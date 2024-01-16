#include <stdio.h>

int main() {
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int produto_a = 0;
    int produto_b = 0;

    scanf("%i%i%i%i", &A, &B, &C,&D);

    produto_a = A * B;
    produto_b = C * D;

    int resultado = produto_a - produto_b;

    printf("DIFERENCA = %i\n", resultado);

    return 0;
}