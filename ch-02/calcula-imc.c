#include <stdio.h>

int main(void) {

    float peso, altura, imc;

    printf("Insira o seu peso(kg): ");
    scanf("%f", &peso);

    printf("Insira sua altura(metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O seu IMC é: %.2f.\n", imc);


    return 0;
}