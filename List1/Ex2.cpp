/*
 * By: Tobias Klein
 *
 * 2. Escreva um programa em linguagem C que solicite o nome do usuário e, em seguida,
 * imprima uma mensagem de boas-vindas na tela, utilizando o nome fornecido.
 * 
 */

#include <iostream>

int main(){

    char name[15];

    std::cout << "\n Type your first name: ";
    std::cin >> name;
    std::cout << "\n Welcome home, " << name << ".\n" << std::endl;   

    return 0;
}