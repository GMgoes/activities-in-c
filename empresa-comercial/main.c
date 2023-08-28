#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define NUM_PROJECTS 10

typedef struct {
    char name_project[20];
    float resources;
} Project;

int main() {
    setlocale(LC_ALL, "Portuguese");
    Project projects[NUM_PROJECTS];
    int opcao;
    char operacao;

    for (int i = 0; i < NUM_PROJECTS; i++) {
        Project proj;
        snprintf(proj.name_project, sizeof(proj.name_project), "Projeto %02d", i + 1);
        proj.resources = 0;
        projects[i] = proj;
    }

    do {
        printf("Informe o projeto que deseja manipular [0...9]: ");
        scanf("%d", &opcao);

        if (opcao >= 0 && opcao < NUM_PROJECTS) {
            printf("Informe a operação que deseja realizar [R - Receita, D - Despesa]: ");
            scanf(" %c", &operacao);

            float valor;
            if (operacao == 'R' || operacao == 'D') {
                printf("Informe o valor: ");
                scanf("%f", &valor);

                if (operacao == 'R') {
                    projects[opcao].resources += valor;
                } else {
                    projects[opcao].resources -= valor;
                }
            } else {
                printf("Opção inválida, tente novamente.\n");
            }
        } else {
            printf("Projeto inválido, tente novamente.\n");
        }

        while (getchar() != '\n');
    } while (opcao != -1);

    for (int i = 0; i < NUM_PROJECTS; i++) {
        printf("Projeto %02d: Nome: %s, Recursos: %.2f\n", i + 1, projects[i].name_project, projects[i].resources);
    }

    return 0;
}
