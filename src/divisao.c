#include <stdio.h>
#include <stdlib.h>

int main() {
    int divisao1, divisao2;

    printf("Digite um número: \t");
    scanf("%d", &divisao1);

    printf("Digite outro número: \t");
    scanf("%d", &divisao2);

    printf("Resultado é: \t %d \n", divisao1 / divisao2);
}