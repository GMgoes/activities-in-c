#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    double operando_um, operando_dois, result;
    int opcao = 0;

    do {
        printf("<== Calculadora ==>\n");
        printf("Escolha uma op��o:\n");
        printf("Op��o 1 - Adi��o\n");
        printf("Op��o 2 - Subtra��o\n");
        printf("Op��o 3 - Divis�o\n");
        printf("Op��o 4 - Multiplica��o\n");
        printf("Op��o 0 - Sair\n");
        printf("Informe a opera��o:\n\t\t\t\t\t>>> ");

        scanf("%i", &opcao);
        printf("\n");
        if (opcao != 0) {
            printf("Informe o primeiro n�mero:\t\t>>> ");
            scanf("%lf", &operando_um);
            printf("Informe o segundo n�mero:\t\t>>> ");
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
                    printf("As op��es s�o de 0 � 4");

            }
            printf("O resultado da equa��o �:\t\t>>> %lf", result);
            printf("\n\nPressione uma tecla para realizar uma nova opera��o: ");
            getch();
            system("cls");
        }
    } while (opcao != 0);

    return 0;
}
