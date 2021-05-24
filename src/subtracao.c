#include <stdio.h>
#include <stdlib.h>

int main() {
    int subtracao1, subtracao2;

    printf("Digite um número: \t");
    scanf("%d", &subtracao1);

    printf("Digite outro número: \t");
    scanf("%d", &subtracao2);

    printf("Resultado é: \t %d \n", subtracao1 - subtracao2);
}