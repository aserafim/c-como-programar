#include <stdio.h>

int main(void) {
    int num1;
    int num2;

    printf("Entre com dois inteiros: ");

    scanf("%d%d", &num1, &num2);

    printf("Número 1: %d\nNúmero 2: %d\n", num1, num2);

    if(num1 == num2) {
        printf("Os dois números são iguais.\n");
    }
    else if(num1 > num2){
        printf("O primeiro número é maior.\n");
    }
    else {
        printf("O segundo número é o maior.\n");
    }

    return 0;
}