#include <stdio.h>

int main() {
  int vetor[5];
  float mediaValores, soma = 0;
  float maiorValor = 0, menorValor = 0;

  for (int i = 0; i < 5; i++) {
    printf("Insira o numero:\n");
    scanf("%d", &vetor[i]);
    soma += vetor[i];
    if (i == 0) {
      maiorValor = vetor[i];
      menorValor = vetor[i];
    } else {
      if (vetor[i] > maiorValor) {
        maiorValor = vetor[i];
      }
      if (vetor[i] < menorValor) {
        menorValor = vetor[i];
      }
    }
  }
  mediaValores = soma / 5;
  for (int i = 0; i < 5; i++) {
    printf("vetor[%d] = %d\n", i, vetor[i]);
  }
  printf("Maior Valor: %f\n", maiorValor);
  printf("Menor Valor: %f\n", menorValor);
  printf("Média dos Valores: %f\n", mediaValores);
  
}
