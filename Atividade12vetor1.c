#include <stdio.h>

int main() {
  int vetor[5];
  float mediaValores, soma = 0;
  float maiorValor = 0, menorValor = 0;

  for (int i = 0; i < 5; i++) {
    printf("Insira o numero:\n");
    scanf("%d", &vetor[i]);
    soma += vetor[i]; // Adicionar o valor atual à soma

    if (i == 0) {
      // Inicializar maiorValor e menorValor com o primeiro elemento do vetor
      maiorValor = vetor[i];
      menorValor = vetor[i];
    } else {
      // Atualizar maiorValor e menorValor, se necessário
      if (vetor[i] > maiorValor) {
        maiorValor = vetor[i];
      }
      if (vetor[i] < menorValor) {
        menorValor = vetor[i];
      }
    }
  }

  // Calcular a média dos valores
  mediaValores = soma / 5;

  // Mostrar os valores do vetor
  for (int i = 0; i < 5; i++) {
    printf("vetor[%d] = %d\n", i, vetor[i]);
  }

  // Mostrar os resultados
  printf("Maior Valor: %f\n", maiorValor);
  printf("Menor Valor: %f\n", menorValor);
  printf("Média dos Valores: %f\n", mediaValores);
  
}