#include<stdio.h>
#include<stdlib.h>

int main(){

    int ladoA, ladoB, ladoC;

    printf("Entre com os três números: ");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);

    printf("Os números inseridos são, A: %d, B: %d e C: %d.\n\n", ladoA, ladoB, ladoC);

    printf("Vou verificar se eles podem formar os lados de um triângulo-retângulo.\nUm minuto...\n\n");

    if((ladoA * ladoA) + (ladoB * ladoB) == (ladoC * ladoC) || (ladoC * ladoC) + (ladoB * ladoB) == (ladoA * ladoA) || (ladoC * ladoC) + (ladoA * ladoA) == (ladoB * ladoB)) {
        printf("Esses valores podem formar os lados de um triângulo-retângulo.\n");
    } else printf("Humm... parece que esses valores não podem formar um triângulo retângulo.\n");

    return 0;
}