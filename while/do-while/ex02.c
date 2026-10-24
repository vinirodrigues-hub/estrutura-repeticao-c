/*Escreva um programa que leia dois números inteiros A e B (A < B) e exiba todos os números pares
existentes no intervalo [A, B].*/

#include <stdio.h>

int main() {

    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%i", &a);
    printf("Digite o segundo numero: ");
    scanf("%i", &b);
    while(a < b){
        if( a % 2 == 0){
            printf("%i\n", a);
        }
        a++;
        
    }

    return 0;
}