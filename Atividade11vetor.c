#include <stdio.h>

int main(){
  float vetor[10];
  int numerosNegativos = 0; 
  float numerosPositivos = 0;

  for(int i = 0; i < 10; i++){
    printf("Insira numero real:\n");
    scanf("%f", &vetor[i]);

    
    if(vetor[i] < 0){
          numerosNegativos++; 
    }
    else{
      numerosPositivos += vetor[i];
      }
  }

  printf("Quantidade de numeros negativos: %d", numerosNegativos);
  printf("\nSoma numeros positivos: %.2f", numerosPositivos);

}
