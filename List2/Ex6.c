/*
 * Author: Tobias Klein
 *
 * Exercise: 6. A loja de eletrônicos TechMundo vende uma certa quantidade
 * de smartphones e uma quantidade de tablets a cada dia. Cada smartphone
 * custa R$ 1000,00 e cada tablet custa R$1500,00. Ao final do dia, o dono
 * quer saber quanto arrecadou com a venda dos smartphones e dos tablets.
 * Escreva um programa que leia o número de smartphones e tablets vendidos
 * em um dia e calcule o total arrecadado.
 * 
 */

#include <stdio.h>

int main(){

    float precoSmart = 1000., precoTablet = 1500., valorFinal;
    int quantSmart, quantTablet;

    printf("\n Quantidade de smartphones vendidos : ");
    scanf("%d", &quantSmart);
    printf(" Quantidade de tablets vendidos : ");
    scanf("%d", &quantTablet);
    
    if(quantSmart<0 || quantTablet<0){
        printf("\n Valor invalido, o valor digitado nao pode ser menor que 0.");
        return -1;
    }

    valorFinal = (float)(quantSmart*precoSmart + quantTablet*precoTablet);

    printf("\n O valor total arrecadado foi de RS %.2f.", valorFinal);
 
    return 0;
}