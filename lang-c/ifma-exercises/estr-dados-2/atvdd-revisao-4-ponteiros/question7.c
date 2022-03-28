//REPLIT: https://replit.com/@adryellpaulo/question7c#main.c
#include <stdio.h>
// Crie um programa que contenha uma funcao que permita passar por parametro dois numeros inteiros A e B. A funcao devera calcular a soma entre estes dois numeros e armazenar o resultado na variavel A. Esta funcao nao devera possuir retorno, mas devera modificar o valor do primeiro parametro. Imprima os valores de A e B na funcao principal.
void alteraA(int *vA, int vB){
  *vA = *vA + vB; 
}

int main(void) {
  int vA = 1;
  int vB = 1;
  
  alteraA(&vA, vB);

  printf("%i %i", vA, vB);
}