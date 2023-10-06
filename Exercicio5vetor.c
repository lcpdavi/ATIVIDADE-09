#include<stdio.h>

int main(){
    
    int vetor[10], quantidadePares = 0;

    for(int i = 0; i <= 10; i++){
        printf("Digite os valores:\n");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            quantidadePares++;
        }else{
            printf("O numero e par");
        }
    }

    printf("Total de pares: %d", quantidadePares);

}