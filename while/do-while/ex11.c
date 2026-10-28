/*Escreva um programa que solicite ao usuário um número entre 1 e 100, repetindo a solicitação
enquanto o valor informado estiver fora desse intervalo. Ao receber um valor válido, exiba-o.*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    while(true){
        printf("\nDigite um número: ");
        scanf("%i", &num);
        if(num >= 1 && num <= 100){
            break;
        }else{
            printf("\nInválido, digite apenas numeros que estão no intervalo de 1 a 100!");
        }
    }
    printf("Número digitado: %i", num);
    return 0;
}