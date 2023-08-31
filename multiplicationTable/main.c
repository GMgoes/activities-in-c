#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int number = 0;
    printf("Informe um número: \n");
    scanf("%d", &number);

    for(int i = 1; i <= 10; i++){
        printf("%d x %d é igual a: %d \n",number,i, number * i);
    }
}
