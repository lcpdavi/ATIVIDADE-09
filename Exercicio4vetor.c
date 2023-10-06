#include<stdio.h>

int main(){

    int vetor[8], X, Y, soma;

    for(int i = 0; i < 8; i++){
        printf("Digite um numero em vetor[%d]", i);
        scanf("%d", &vetor[i]);
    }

    do{
        printf("Insira a posicao(0 - 7):\n");
        scanf("%d", &X);
        printf("Insira a posicao(0 - 7):\n");
        scanf("%d", &Y);

        if(X < 0 || X > 7 || Y < 0 || Y > 7){
            printf("Indice invalido.\n");

        }

    }while(X < 0 || X > 7 || Y < 0 || Y > 7);


    for( int i = 0; i < 8; i++){
        if(i == X){
            soma += vetor[i];
        }
        if(i == Y){
            soma += vetor[i];
        }

    }

    soma = vetor[X] + vetor[Y];

    printf("Soma dos indices[%d] + indice[%d] = %d", X, Y, soma);

}