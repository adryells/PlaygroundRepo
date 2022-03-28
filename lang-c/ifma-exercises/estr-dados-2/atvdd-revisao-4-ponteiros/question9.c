#include <stdio.h>
// https://replit.com/@adryellpaulo/question9c#main.c

int main(void) {
  // Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereco de cada posic ̧ao dessa matriz.
  float matriz[3][3];
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      printf("Endereço do elemento (%i,%i): %i.\n", i,j,&matriz[i,j]);
    }
  }
}
