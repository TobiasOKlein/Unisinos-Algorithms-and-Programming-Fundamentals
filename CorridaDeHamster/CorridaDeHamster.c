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

    int posHamster1 = 0, posHamster2 = 0, sorte;
    char caminho[10] = "# ";

    while(posHamster1 != 12 && posHamster2 != 12){

        system("clear");

        posHamster1 = corre(posHamster1);
        posHamster2 = corre(posHamster2);

        printf("\n Hamster 1 : ");
        for(int i=0; i<posHamster1; i++){
            printf("%s", caminho);
        }
        printf("\n Hamster 2 : ");
        for(int i=0; i<posHamster2; i++){
            printf("%s", caminho);
        }

        sleep(1);

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