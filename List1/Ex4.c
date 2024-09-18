/*
 * Author: Tobias Klein
 *
 * Exercise: 4. Como poderíamos tornar o programa acima (Exercise 3.) mais genérico,
 * de maneira que pudéssemos registrar qualquer questão objetiva com 5 alternativas?
 * 
 */

#include <stdio.h>

int main(){

    char option, compare;
    char answer = 'a';
    char question[100] = "Here is the question, what is the answer?";
    char option_A[100] = "Option A.";
    char option_B[100] = "Option B.";
    char option_C[100] = "Option C.";
    char option_D[100] = "Option D.";
    char option_E[100] = "Option E.";

    printf("\n %s\n a) %s\n b) %s\n c) %s\n d) %s\n e) %s\n : ", question, option_A, option_B, option_C, option_D, option_E);
    scanf("%c", &option);

    compare = tolower(option);

    if(compare == answer){
        printf("\n You are right! The answer is the '%c'!\n", answer);
    }else{
        printf("\n Sorry, you answered '%c'. The correct answer is '%c'. Good Luck Next Time!", compare, answer);
    }

    return 0;
}