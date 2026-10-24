/* Escreva um programa que exiba todas as potências de 2 que sejam menores ou iguais a um valor limite
informado pelo usuário */

#include <stdio.h>

int main() {
    int num, limite;
    printf("Digite um número: ");
    scanf("%i", &num);
    printf("Informe o limite: ");
    scanf("%i", &limite);
    while(num <= limite){
        printf("%i\n", num*num);
        num++;
    }
    
    return 0;
}