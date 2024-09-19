/*
 * Author: Tobias Klein
 *
 * Exercise: 2. Um turista deseja comprar dólares em uma casa de câmbio.
 * Escreva um programa que leia a cotação do dólar para real, a quantidade
 * de dólares que o turista deseja comprar, e calcule o valor total em reais
 * que ele precisará pagar.
 * 
 */

#include <iostream>

int main(){

    float real, dolar, cotacao_Dolar = 5.5;

    std::cout << "\n * CASA DE CAMBIO * \n A cotacao atual do dolar esta em " << cotacao_Dolar << " para um real.\n Quantos dolares desejaria comprar? : ";
    std::cin >> dolar;

    real = cotacao_Dolar * dolar;

    std::cout << "\n Seu cambio custaria " << real << " reais, acrescido de juros apos a conversao.";
 
    return 0;
}