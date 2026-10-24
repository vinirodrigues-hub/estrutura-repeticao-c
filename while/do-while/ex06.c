/*Escreva um programa que leia números inteiros até que o usuário digite 0 (sentinela). Ao final, exiba a
soma de todos os valores lidos (excluindo o sentinela).*/

#include <stdio.h>

int main() {
    
    int num, soma = 0;
    do{
        printf("Digite um numero(0 para parar): ");
        scanf("%i", &num);
        soma = soma + num;
    }while(num != 0);
    printf("Resultado de todos os valores lidos: %i\n", soma);
    return 0;
}