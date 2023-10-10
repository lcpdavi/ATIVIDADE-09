#include <stdio.h>

int main(){
  float vetor[6];
  int numerosNegativos = 0; 
  float somaNumerosPositivos = 0;

  for(int i = 0; i < 6; i++){
    printf("Insira numero real:\n");
    scanf("%f", &vetor[i]);
    
    if(vetor[i] < 0){
        numerosNegativos++; 
    }
    else{
      somaNumerosPositivos += vetor[i];
      }
  }

  printf("Quantidade de numeros negativos: %d", numerosNegativos);
  printf("\nSoma numeros positivos: %.2f", somaNumerosPositivos);

}
