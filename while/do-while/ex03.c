//Escreva um programa que leia um número inteiro e exiba sua tabuada de multiplicação de 1 a 10//

#include <stdio.h>

int main() {
    int num, multiplicador = 1;
    printf("Digite um numero: ");
    scanf("%i", &num);
    while (multiplicador <= 10){
        printf("%i X %i = %i\n", num, multiplicador, num * multiplicador);
        multiplicador++;
    }
    
    return 0;
}