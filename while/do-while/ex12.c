/*Escreva um programa que peça ao usuário uma senha numérica. O programa deve continuar pedindo
enquanto a senha digitada for diferente de 2025. Ao acertar, exiba "Acesso liberado" e quantas
tentativas foram necessárias.*/

#include <stdio.h>

int main() {
    int senha, tentativa = 1;
    printf("Digite sua senha: ");
    scanf("%i", &senha);
    while(senha != 2025){
        printf("Digite sua senha: ");
        scanf("%i", &senha);
        if(senha == 2025){
            printf("Acesso liberado!");
        }
        tentativa++;
    } 
      
    printf("\nNúmeros de tentativas: %i", tentativa);
    return 0;
}