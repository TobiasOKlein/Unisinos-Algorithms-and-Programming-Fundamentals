/*
 * Author: Tobias Klein
 *
 * Exercise: 3. Escreva um programa em C que realize o seguinte procedimento:
 * a. Imprima na tela a seguinte questão: Qual é o verdadeiro nome do super-herói Batman?
 * b. Apresente cinco alternativas para o usuário, cada uma em uma linha: a) Bruce Wayne
 * b) Clark Kent c) Peter Parker d) Tony Stark e) Steve Rogers
 * c. Armazene a letra correspondente à resposta correta (‘a’) em uma variável.
 * d. Solicite ao usuário que digite sua resposta, e a armazene em uma variável.
 * e. Ao final, o programa deve exibir na tela a resposta do usuário e a resposta correta. Por
 * exemplo, se o usuário digitou como resposta a alternativa ‘d’, a mensagem seria esta:
 * "Você respondeu alternativa d. A resposta correta é a alternativa a."
 * 
 */

#include <iostream>

int main(){

    char option, answer = 'a', compare;

    std::cout << "\n What is the real Batman's name?\n a) Bruce Wayne.\n b) Clark Kent.\n c) Peter Parker.\n d) Tony Stark\n e) Steve Rogers.\n : " << std::endl;
    std::cin >> option;

    compare = tolower(option);

    if(compare == answer){
        std::cout << "\n You are right! The answer is the '" << answer <<"'!" << std::endl;
    }else{
        std::cout << "\n Sorry, you answered '" << compare << "'. The correct answer is '" << answer <<"'. Good Luck Next Time!" << std::endl;
    }

    return 0;
}