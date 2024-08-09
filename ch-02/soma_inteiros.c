#include <stdio.h>

int main(void) {

    int inteiro1, inteiro2, soma;

    printf("Insira o primeiro inteiro: ");
    scanf("%d", &inteiro1);

    printf("Insira o segundo inteiro: ");
    scanf("%d", &inteiro2);

    soma = inteiro1 + inteiro2;

    printf("O resultado da soma é: %d\n", *&soma);

    return 0;
}