#include <stdio.h>

int main(){
  float vetor[15], mediaNotas;
  float somaNotas = 0; 
  int alunos = 15;

  for(int i = 0; i < 15; i++){
    printf("Insira a nota:\n");
    scanf("%f", &vetor[i]);
  }
  for (int i = 0; i < 15; i++) {
        somaNotas += vetor[i];
    }

  mediaNotas = somaNotas / alunos;

  printf("A nota geral da turma foi de: %.2f", mediaNotas);
  
}