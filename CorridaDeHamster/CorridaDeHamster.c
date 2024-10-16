/*
 * Author: Tobias Klein
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int corre(int posicao);

int main(){

    srand(time(NULL));

    int caminho = 12, posHamster1 = 0, posHamster2 = 0, sorte;
    char passos[10] = "# ";

    while(posHamster1 != caminho && posHamster2 != caminho){

        #ifdef _WIN32
        system("cls"); // Windows
        #else
        system("clear"); // Linux/macOS
        #endif

        posHamster1 = corre(posHamster1);
        posHamster2 = corre(posHamster2);

        printf("\n Hamster 1 : ");
        for(int i=0; i<posHamster1; i++){
            printf("%s", passos);
        }
        printf("\n Hamster 2 : ");
        for(int i=0; i<posHamster2; i++){
            printf("%s", passos);
        }

        sleep(1);

    }

    if(posHamster1==caminho && posHamster2!=caminho){
        printf("\n\n Hamster 1 foi o grande vencedor!!\n");
    }
    if(posHamster1!=caminho && posHamster2==caminho){
        printf("\n\n Hamster 2 foi o grande vencedor!!\n");
    }
    if(posHamster1==caminho && posHamster2==caminho){
        printf("\n\n Um Empate! Inacreditavel!!\n");
    }

    return 0;
}

int corre(int posicao){
    
    int sorte = rand()%5 + 1;

    switch (sorte)
    {
    case 1:
        posicao++;
        break;
    case 2:
        posicao = posicao+2;
        break;
    case 3:
        break;
    case 4:
        posicao--;
        break;
    case 5:
        posicao = posicao-2;
        break;
    }
    if (posicao < 0){
        posicao = 0;
    }

    return posicao;
}
