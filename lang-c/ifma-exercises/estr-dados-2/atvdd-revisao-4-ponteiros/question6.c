// REPLIT: https://replit.com/@adryellpaulo/question6c#main.c
// Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faca uma funcao que retorne a soma
// do dobro dos dois numeros lidos. A funcao devera armazenar o dobro de A na propria variavel A e o dobro de B na
// propria variavel B.

#include <stdio.h>
int soma(int v1, int v2){
  v1 = v1 * 2;
  v2 = v2 * 2;

  return v1 + v2;
}


int main(void) {

  int v1, v2;

  printf("Primeiro Numero: ");
  scanf("%i", &v1);
  
  printf("Segundo Numero: ");
  scanf("%i", &v2);

  int resultado = soma(v1, v2);
  printf("%i", resultado);
  
  return 0;
}