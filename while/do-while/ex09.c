/*Escreva um programa que leia números inteiros até que o usuário digite 999 (sentinela). Ao final,
informe quantos valores positivos, negativos e zeros foram digitados.*/

#include <stdio.h>

int main() {
    int num, positivo = 0, negativo = 0;
    printf("Digite um numero: ");
    scanf("%i", &num);
    while(num  != 999){
      printf("Digite um numero: ");
      scanf("%i", &num);  
      if(num < 0){
        negativo++;
      }else if(num > 0){
        positivo++;
      }
    }
    printf("Quantidade de números positivos digitados: %i", positivo);
    printf("\nQuantidade de numeros negativos digitados: %i", negativo);
    return 0;
}