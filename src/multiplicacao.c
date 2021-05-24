#include <stdio.h>
#include <stdlib.h>

int main() {
    int multiplicacao1, multiplicacao2;

    printf("Digite um número: \t");
    scanf("%d", &multiplicacao1);

    printf("Digite outro número: \t");
    scanf("%d", &multiplicacao2);

    printf("Resultado é: \t %d \n", multiplicacao1 * multiplicacao2);
}