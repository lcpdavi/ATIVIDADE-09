#include<stdio.h>

int main(){
    int vetor[5], maior, menor, pMaior = 0, pMenor = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite os valores:");
        scanf("%d", &vetor[i]);


    }

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 0; i < 5; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            pMaior = i;

        }
        if(vetor[i] < menor){
            menor = vetor[i];
            pMenor = i;
        }
    }

    printf("maior: %d, Posicao: %d \nmenor: %d, Posicao: %d", maior, 
     pMaior, menor, pMenor);

}