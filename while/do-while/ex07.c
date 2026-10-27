/*Escreva um programa que leia notas de alunos (entre 0 e 10) até que seja digitado um valor negativo
(sentinela). Ao final, exiba a quantidade de notas lidas e a média aritmética*/

#include <stdio.h>

int main() {
     float nota, media;
     int contador = 0, soma = 0;
    do{
        printf("Digite sua nota: ");
        scanf("%f", &nota);
        contador++;
        soma = soma + nota;
        media = soma / contador;
    }while(nota >= 0);
    printf("sua media final é: %2.f", media);
    printf("\nNumero de notas lidas: %i", contador);
    return 0;
}
