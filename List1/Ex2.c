/*
 * Author: Tobias Klein
 *
 * Exercise: 2. Escreva um programa em linguagem C que solicite o nome do usuário e, em seguida,
 * imprima uma mensagem de boas-vindas na tela, utilizando o nome fornecido.
 * 
 */

#include <stdio.h>

int main(){

    char name[15];

    printf("\n Type your first name: ");
    scanf("%s", name);
    printf("\n Welcome home, %s.\n", name);   

    return 0;
}