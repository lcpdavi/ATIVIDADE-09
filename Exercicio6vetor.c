#include<stdio.h>

int main(){
    int vetor[5], maior, menor;

    for(int i = 0; i < 5; i++){
        printf("Digite os valores:");
        scanf("%d", &vetor[i]);


    }

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 0; i < 5; i++){
        if(vetor[i] > maior){
            maior = vetor[i];

        }
        if(vetor[i] < menor){
            menor = vetor[i];

        }
    }

    printf("maior: %d \nmenor: %d, ", maior, menor);

}