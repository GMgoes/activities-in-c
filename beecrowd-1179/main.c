#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 0;
    int vet_a[5];
    int vet_b[5];
    int flag_one = 0;
    int flag_two = 0;
    int actual_vet_a = 0;
    int actual_vet_b = 0;

    for(int i = 0; i < 15; i++){
        if(flag_one == 1){
            flag_one = 0;
            actual_vet_a = 0;
            for(int y = 0; y < 5; y++){
                printf("par[%d] = %d\n", y, vet_a[y]);
            }
        }
        if(flag_two == 1){
            flag_two = 0;
            actual_vet_b = 0;
            for(int y = 0; y < 5; y++){
                printf("impar[%d] = %d\n", y, vet_b[y]);
            }
        }
        scanf("%d", &number);

        if(number % 2 == 0){
            vet_a[actual_vet_a] = number;
            actual_vet_a++;
            if(actual_vet_a == 5){
                flag_one = 1;
            }
        }else{
            vet_b[actual_vet_b] = number;
            actual_vet_b++;
            if(actual_vet_b == 5){
                flag_two = 1;
            }
        }
    }

    for(int i = 0; i < actual_vet_b; i++){
        printf("impar[%d] = %d\n", i, vet_b[i]);
    }

    for(int i = 0; i < actual_vet_a; i++){
        printf("par[%d] = %d\n", i, vet_a[i]);
    }

    return 0;
}
