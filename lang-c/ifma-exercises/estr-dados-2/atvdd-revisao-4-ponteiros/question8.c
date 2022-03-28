//REPLIT: https://replit.com/@adryellpaulo/question8c#main.c
#include <stdio.h>

int main(void) {
  // Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereco de cada posicao desse array.
  float floats[10];
  for(int i = 0; i < 10; i++){
    printf("Endereco do %iº elemento: %i\n", i+1, &floats[i]);
  }
  return 0;
}