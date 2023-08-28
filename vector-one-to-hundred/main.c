#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i;
    float input = 0;
    float A[100];

    for (i = 0; i < 100; i++) {
        scanf("%f", &input);
        A[i] = input;
    }

    for (i = 0; i < 100; i++) {
        if (A[i] <= 10) {
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }
    return 0;
}
