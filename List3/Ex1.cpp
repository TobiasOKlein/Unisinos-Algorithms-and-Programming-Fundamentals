/*
 * Author: Tobias Klein
 *
 * Exercise: 1. Escreva um programa que leia dois números
 * e efetue uma divisão, mas somente se o divisor for
 * diferente de zero; quando isto ocorrer, é mostrada uma
 * mensagem de erro apropriada.
 *
 */

#include <iostream>

int main(){
    
    // Variables
    int numberDivisor, numberDividend, numberQuotient, numberRemainder;
    char error;
    
    // Introduction
    std::cout << "\n Let's make a division!\n";
    std::cout << "\n Send your divisor number: ";
    std::cin >> numberDivisor;
    std::cout << "\n Send your dividend number: ";
    std::cin >> numberDividend;
    
    // Error test
    if (numberDividend == 0){
        std::cout << "\n Your divisor can't be divided by zero.\n Press Enter to restart.";
        std::cin >> error;
        return -1;
    }
    
    // Execution
    numberQuotient = numberDivisor / numberDividend;
    numberRemainder = numberDivisor % numberDividend;
    std::cout<<"\n " << numberDivisor << " divided by " << numberDividend << " is equal to " << numberQuotient << " with the remainder " << numberRemainder << ".\n" << std::endl;

    return 0;
}
