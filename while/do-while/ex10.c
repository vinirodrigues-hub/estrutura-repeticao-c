/*Escreva um programa que leia um número inteiro positivo N e calcule a soma de todos os números
ímpares de 1 até N.*/

#include <stdio.h>

int main() {
    int num, impar = 0, i = 1;
    printf("Digite um número: ");
    scanf("%i", &num);
    do{
        if(i % 2 == 1){
            impar = impar + i;
        }
        i++;
    }while(num >= i);
    printf("A soma de todos os numeros impares de 1 a n: %i", impar);
    return 0;
}