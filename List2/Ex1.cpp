/*
 * Author: Tobias Klein
 *
 * Exercise: 1. Faça um algoritmo que leia uma quantidade de tempo
 * em minutos e escreva o tempo equivalente em segundos na tela.
 * 
 */

#include <iostream>

int main(){

    int minutes, seconds;

    std::cout << "\n Envie uma quantidade inteira de minutos para serem convertidos : ";
    std::cin >> minutes;

    seconds = 60 * minutes;

    std::cout << "\n Resultado: " << minutes << " minutos sao convertidos para " << seconds << " segundos." << std::endl;

    return 0;
}