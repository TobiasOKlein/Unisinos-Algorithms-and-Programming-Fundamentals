/*
 * Author: Tobias Klein
 *
 * Exercise: 4. Como poderíamos tornar o programa acima (Exercise 3.) mais genérico,
 * de maneira que pudéssemos registrar qualquer questão objetiva com 5 alternativas?
 * 
 */

#include <iostream>

int main(){

    char option, compare;
    char answer = 'a';
    char question[100] = "Here is the question, what is the answer?";
    char option_A[100] = "Option A.";
    char option_B[100] = "Option B.";
    char option_C[100] = "Option C.";
    char option_D[100] = "Option D.";
    char option_E[100] = "Option E.";

    std::cout << "\n " << question << "\n a) " << option_A << "\n b) " <<  option_B << "\n c) " << option_C << "\n d) " <<  option_D << "\n e) " <<  option_E << std::endl;
    std::cin >> option;

    compare = tolower(option);

    if(compare == answer){
        std::cout << "\n You are right! The answer is the '" << answer << "'!" << std::endl;
    }else{
        std::cout << "\n Sorry, you answered '" << compare << "'. The correct answer is '" << answer << "'. Good Luck Next Time!" << std::endl;
    }

    return 0;
}