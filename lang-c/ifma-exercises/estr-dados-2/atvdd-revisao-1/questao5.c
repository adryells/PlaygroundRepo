#include <stdio.h>

int main(void) {
  // Escrever um programa em "C" que solicita as notas das duas provas feitas por cada um dos alunos de uma turma (as notas tem de estar no intervalo [0 10]) e imprime para cada um a média das notas. O programa deve parar imediatamente após ter sido digitado o valor 50 para a nota da primeira prova.
  float n1, n2;
  int qtdd_alunos;

  printf("Quantos alunos há na turma: ");
  scanf("%d", &qtdd_alunos);
  
  for(int i = 0; i <= qtdd_alunos; i++){
    printf("\nEscreva a primeira nota: ");
    scanf("%f", &n1);

    if(n1 == 50){
      break;
    }
    if (n1 < 0 || n1 > 10){
      printf("Escreva a primeira nota entre [0 10]: ");
      scanf("%f", &n1);
    }

    printf("\nEscreva a segunda nota: ");
    scanf("%f", &n2);
    if (n2 < 0 || n2 > 10){
      printf("Escreva a segunda nota entre [0 10]: ");
      scanf("%f", &n1);
    }

    printf("\n%.2f a média entre as 2 notas do %dº aluno", (n1 + n2)/2, i+1);

  }
  
  return 0;
}
