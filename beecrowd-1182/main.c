#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[12][12];
    float number = 0;
    int column = 0;
    char operation = 'Z';
    float sum = 0;
    scanf("%d", &column);
    scanf(" %c", &operation);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &number);
            matriz[i][j] = number;
        }
    }

    for (int i = 0; i < 12; i++) {
        sum += matriz[i][column];
    }

    if (operation == 'S') {
        printf("%.1f", sum);
    }
    if (operation == 'M') {
        printf("%.1f", sum / 12);
    }

    return 0;
}
