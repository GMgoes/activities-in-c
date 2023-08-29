#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[12][12];
    float number = 0;
    char operation = 'Z';
    float sum = 0;
    int jump = 0;
    int initial;
    int fin;
    int count = 0;
    scanf(" %c", &operation);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &number);
            matriz[i][j] = number;
        }
    }

    for(int i = 11; i >= 7; i--){
    jump++;
    initial = 0 + jump;
    fin = 11 - jump;
    for(; initial <= fin; initial++){
        sum+= matriz[jump][initial];
        count++;
    }
}

    if (operation == 'S') {
        printf("%.1f", sum);
    }
    if (operation == 'M') {
        printf("%.1f", sum / count);
    }

    return 0;
}
