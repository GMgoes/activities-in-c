#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 0;
    int max_value = 0;


    scanf("%d", &size);
    int numbers[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] > max_value) {
            max_value = numbers[i];
        }
    }
    long long int fibonnaci[max_value];
    fibonnaci[0] = 0;
    fibonnaci[1] = 1;

    for(int i = 2; i <= max_value; i++){
        fibonnaci[i] = fibonnaci[i - 1] + fibonnaci[i - 2];
    }

    for(int i = 0; i < size; i++){
        printf("Fib(%d) = %lld\n", numbers[i], fibonnaci[numbers[i]]);
    }

    return 0;
}





