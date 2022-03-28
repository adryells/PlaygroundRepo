#include <stdio.h>
// Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do teclado.
// Em seguida, compare seus enderecos e exiba o conteudo do maior endereco.
// REPLIT: https://replit.com/@adryellpaulo/question3c#main.c

int main(void) {

  int n1;
  int n2;

  printf("Primeiro numero: ");
  scanf("%i", &n1);

  printf("Segundo numero: ");
  scanf("%i", &n2);

  int *p1 = &n1;
  int *p2 = &n2;

  if(p1 > p2){
    printf("%i %i %i", p1, *p1, &p1);
  } else {
    printf("%i %i %i", p2, *p2, &p2);
  };
  
  return 0;
}