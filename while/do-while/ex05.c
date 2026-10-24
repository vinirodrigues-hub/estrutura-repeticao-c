/*Escreva um programa que leia um valor N e exiba todos os termos da sequência de Fibonacci menores
que N.*/

#include <stdio.h>

int main() {
    int n, contador = 0, anterior = 0, atual = 1, proximo;
    printf("Quantos termos? ");
    scanf("%i", &n);
    while(contador < n){
        printf("%i\n", anterior);
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
        contador++;
    }
    
    return 0;
}