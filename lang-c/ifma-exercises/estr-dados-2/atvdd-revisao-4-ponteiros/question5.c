// REPLIT: https://replit.com/@adryellpaulo/question5c#main.c
// Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas 2 variaveis e troque o seu conteudo,
// ou seja, esta funcao e chamada passando duas variaveis A e B por exemplo e apos a execucao da funcao,
// A conter o valor de B e B  ́tera o valor de A.
#include <stdio.h>
void altera_conteudo(int v1, int v2){
  int aux = v1;
  v1 = v2;
  v2 = aux;

  printf("Agora o valor de v1 é %i\nE o valor de v2 é %i", v1, v2);
}

int main(void) {

  int v1, v2;

  printf("Primeiro Numero: ");
  scanf("%i", &v1);
  
  printf("Segundo Numero: ");
  scanf("%i", &v2);

  altera_conteudo(v1, v2);
  
  return 0;
}