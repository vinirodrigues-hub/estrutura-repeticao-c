/*Escreva um programa que leia uma sequência de números inteiros positivos até que o usuário digite 0.
Ao final, exiba o maior e o menor valor informado.*/

#include <stdio.h>

int main() {
    int num;
    int menor, maior;
    printf("Digite um número diferente de 0: ");
    scanf("%i", &num);
    maior = num;
    menor = num;
    while(num != 0){
          
        if(num > maior){
            maior = num;
        }if(num < menor){
            menor = num;
    }   
        printf("Digite um número diferente de 0: ");
        scanf("%i", &num);
    }
      
    
    printf("Maior valor informado: %i", maior);
    printf("\nMenor valor informado: %i", menor);
    return 0;
}
     

    



