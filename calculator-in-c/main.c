#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    double operando_um, operando_dois, result;
    int opcao = 0;

    do {
        printf("<== Calculadora ==>\n");
        printf("Escolha uma opção:\n");
        printf("Opção 1 - Adição\n");
        printf("Opção 2 - Subtração\n");
        printf("Opção 3 - Divisão\n");
        printf("Opção 4 - Multiplicação\n");
        printf("Opção 0 - Sair\n");
        printf("Informe a operação:\n\t\t\t\t\t>>> ");

        scanf("%i", &opcao);
        printf("\n");
        if (opcao != 0) {
            printf("Informe o primeiro número:\t\t>>> ");
            scanf("%lf", &operando_um);
            printf("Informe o segundo número:\t\t>>> ");
            scanf("%lf", &operando_dois);

            switch(opcao){
                case 1:
                    result = operando_um + operando_dois;
                    break;
                case 2:
                    result = operando_um - operando_dois;
                    break;
                case 3:
                    result = operando_um / operando_dois;
                case 4:
                    result = operando_um * operando_dois;
                default:
                    printf("As opções são de 0 à 4");

            }
            printf("O resultado da equação é:\t\t>>> %lf", result);
            printf("\n\nPressione uma tecla para realizar uma nova operação: ");
            getch();
            system("cls");
        }
    } while (opcao != 0);

    return 0;
}
