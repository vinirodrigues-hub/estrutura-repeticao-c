// Escreva um programa que leia um número inteiro positivo N e exiba a contagem regressiva de N até 0 

#include <stdio.h>

int main() {

    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);
    while (n > 0){
        printf("%i\n", n);
        n--;
    }

    return 0;
}

