#include <stdio.h>

int main() {
    int A = 0;
    int B = 0;
    int C = 0;
    int maior = 0;

    scanf("%i%i%i", &A, &B, &C);

    if(A > B){
        maior = A;
    }else{
        maior = B;
    }
    
    if(C > maior){
        maior = C;
    }

    printf("%i eh o maior", maior);

    return 0;
}