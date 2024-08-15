/*Calcula população mundial*/
#include<stdio.h>
#include<stdlib.h>

//população mundial 2024
#define pop_atual 8170719082
#define tax_cres 0.008

int main() {

    printf("A população mundial nos próximos anos será:\n");

    printf("2025: %.2f\n", pop_atual * tax_cres);

    return 0;
}