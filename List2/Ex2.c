/*
 * Author: Tobias Klein
 *
 * Exercise: 2. Um turista deseja comprar dólares em uma casa de câmbio.
 * Escreva um programa que leia a cotação do dólar para real, a quantidade
 * de dólares que o turista deseja comprar, e calcule o valor total em reais
 * que ele precisará pagar.
 * 
 */

#include <stdio.h>

int main(){

    float real, dolar, cotacao_Dolar = 5.5;

    printf("\n * CASA DE CAMBIO * \n A cotacao atual do dolar esta em %.2f para um real.\n Quantos dolares desejaria comprar? : ", cotacao_Dolar);
    scanf("%f", &dolar);

    real = cotacao_Dolar * dolar;

    printf("\n Seu cambio custaria %.2f reais, acrescido de juros apos a conversao.", real);
 
    return 0;
}