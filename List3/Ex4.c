/*
 * Author: Tobias Klein
 *
 * Exercise: 4. Crie um programa que verifica se um número
 * inteiro informado pelo usuário é divisível por 3.
 * 
 */

#include <stdio.h>

int main(){

    int numero;

    printf("\n Digite seu numero : ");
    scanf("%d", &numero);

    if (numero%3 == 0){
        printf("\n Seu numero digitado (%d) eh divisivel por 3.", numero);
    }else{
        printf("\n Seu numero digitado (%d) nao eh divisivel por 3.", numero);
    }
    
    return 0;
}