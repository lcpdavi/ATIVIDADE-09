#include<stdio.h>

int main(){

    int vetor[6];

    for(int i = 0; i < 6; i++){
        printf("Digite os valores:");
        scanf("%d", &vetor[i]);
    }

     for(int i = 5; i >= 0; i--){
        printf("\nvetor[%d] = %d", i, vetor[i]);
        
    }
}