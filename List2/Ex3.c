/*
 * Author: Tobias Klein
 *
 * Exercise: 3. Um restaurante de buffet a quilo cobra R$ 40,00 por quilo.
 * Escreva um programa que leia o peso do prato do cliente e calcule o valor a ser pago.
 * 
 */

#include <stdio.h>

int main(){

    float valor_Kg = 40, peso_Prato, valor_Prato;

    printf("\n Bem-vindo ao nosso restaurante! \n Pode pesar sua comida em quilos : ");
    scanf("%f", &peso_Prato);

    valor_Prato = peso_Prato * valor_Kg;

    printf("\n Seu prato deu %.2f reais, senhor(a).", valor_Prato);
 
    return 0;
}